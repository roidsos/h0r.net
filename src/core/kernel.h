#ifndef KERNEL_H
#define KERNEL_H

#include "arch/x86_64/cpu.h"

#include "limine.h"
#include <types/stdtypes.h>
#include "flanterm.h"


// Struct to hold globals
struct HN_data_block {
    //System info
    CPUInfo cpu_info;

    //ACPI shit
    void* hhdm_off;
    uint32_t lapic_base;

    //kterm shit
    struct flanterm_context* ft_ctx;
    struct limine_framebuffer *framebuffer;
};
extern struct HN_data_block data;
#endif
