#include "LAPIC.h"
#include <arch/x86_64/cpu.h>
#include <arch/x86_64/io/portio.h>
#include <core/error.h>
#include <core/mm/mem.h>
#include <drivers/ACPI/HPET.h>
#include <vendor/printf.h>

u32 ticks = 0;

u32 rreg(u16 offset) { return *((u32 *)((u64)PHYS_TO_VIRT(hn_data.lapic_base) + offset)); }

void wreg(u16 offset, u32 val) {
    *((u32 *)((u64)PHYS_TO_VIRT(hn_data.lapic_base) + offset)) = val;
}

void lapic_timer_stop() {
    wreg(LAPIC_TMRINITCNT, 0);
    wreg(LAPIC_LVT_TMR, LVT_MASKED);
}

void lapic_timer_oneshot(u64 ms, u8 vec) {
    lapic_timer_stop();
    wreg(LAPIC_TMRDIV, 0);
    wreg(LAPIC_LVT_TMR, vec);
    wreg(LAPIC_TMRINITCNT, ms * ticks);
}

_bool lapic_init() {
    madt_init();

    // make sure the leagacy PIC is disabled
    o8(0x21, 0xFF);
    iowait();
    o8(0xA1, 0xFF);
    iowait();

    // enable the LAPIC
    wreg(LAPIC_SPURIOUS, 0x1FF);
    wreg(LAPIC_TASKPRIOR, 0);

    // check for timer
    if (!hpet_init()) {
        return false;
    }

    // Calibrate the timer
    lapic_timer_stop();
    wreg(LAPIC_TMRDIV, 0);
    wreg(LAPIC_LVT_TMR, 0);
    wreg(LAPIC_TMRINITCNT, 0xFFFFFFFF);

    hpet_usleep(100);

    ticks = 0xFFFFFFFF - rreg(LAPIC_TMRCURRCNT);
    lapic_timer_stop();

    return true;
}

void lapic_eoi() { wreg(LAPIC_EOI, 0); }
