#include "sched.h"
#include <arch/x86/interrupts/interrupts.h>
#include <logging/logger.h>
#include <types/queue.h>
#include <types/vector.h>
#include <drivers/Memory/scubadeeznutz.h>
#include <drivers/Memory/PFA.h>
typedef struct {
    Registers status;
    uint8_t pl_and_flags;
    uint64_t* pml4;
} process_t;

static bool is_active;
static bool not_first_tick;
queue(uint64_t, process_queue);
vector_static(process_t, processes);
uint64_t current_process;

void schedule(Registers *regs) {
    if (!is_active)
        return;
    if (not_first_tick)
        memcpy(&processes.data[current_process].status, regs,
               sizeof(Registers));
    not_first_tick = true;

    while (true) {
        if (process_queue.fullness == 0) {
            log_CRITICAL(
                NULL, HN_ERR_UNIMPLEMENTED,
                "No more processes to execute, ideally, we should shut down");
        }
        uint64_t next;
        queue_remove(process_queue, next);
        process_t nextproc = vector_at(&processes, next);
        if (nextproc.status.rip != 0) {
            memcpy(regs, &nextproc.status, sizeof(Registers));
            __asm__ volatile("mov %%cr3, %0\r\n" : "=r"(nextproc.pml4) :);
            current_process = next;
            queue_add(process_queue, next);
            break;
        }
    }
}
void sched_init() {
    not_first_tick = false;
    queue_init(process_queue, uint64_t, 500);
    vector_init(&processes);
}
void sched_enable() { is_active = true; }

void kill_process(uint64_t ID) { processes.data[ID].status.rip = 0; }

uint64_t create_process(void (*process_main)(),uint64_t prog_size,uint8_t pl_and_flags,bool krnl_mode) {
    process_t newproc;
    newproc.pl_and_flags = pl_and_flags;
    if (krnl_mode)
    {
        __asm__ volatile("movq %%rsp, %0\r\n" : "=r"(newproc.status.rsp) :);
        __asm__ volatile("movq %%cr3, %0\r\n" : "=r"(newproc.pml4) :);
        newproc.status.rflags = 0x202;
        newproc.status.rip = (uint64_t)process_main;
        newproc.status.ss = 0x10;
        newproc.status.cs = 0x08;

    }else{
        newproc.pml4 = create_pml4();
        newproc.status.rsp = 0;
        scuba_map(newproc.pml4,0,VIRT_TO_PHYS(request_pages(16)),16,VIRT_FLAGS_USERMODE);
        newproc.status.rip = (uint64_t)process_main;
        scuba_map(newproc.pml4,(uint64_t)process_main,
            VIRT_TO_PHYS(request_pages(NUM_BLOCKS(prog_size))),
            NUM_BLOCKS(prog_size),
            VIRT_FLAGS_USERMODE);
        scuba_map(newproc.pml4,(uint64_t)schedule,
            VIRT_TO_PHYS(schedule),
            4,
            VIRT_FLAGS_USERMODE);
        newproc.status.rflags = 0x202;
        if ((pl_and_flags & 0x3) == 1)
        {
            newproc.status.ss = 0x18;
            newproc.status.cs = 0x20;
        }else if ((pl_and_flags & 0x3) == 2)
        {
            newproc.status.ss = 0x28;
            newproc.status.cs = 0x30;
        }else if ((pl_and_flags & 0x3) == 3)
        {
            newproc.status.ss = 0x38;
            newproc.status.cs = 0x40;
        }
    }
    

    vector_push_back(&processes, newproc);
    queue_add(process_queue, processes.len - 1);

    return processes.len - 1;
}