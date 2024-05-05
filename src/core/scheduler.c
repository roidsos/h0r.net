#include "scheduler.h"
#include <arch/x86_64/interrupts/interrupts.h>
#include <drivers/APIC.h>
#include <vendor/printf.h>

void schedule(UNUSED Registers *regs) {

    printf("a");

    apic_timer_oneshot(1, 32);
    apic_eoi();
}

void sched_init() { register_ISR(32, schedule); }