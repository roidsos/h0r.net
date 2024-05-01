#ifndef APIC_H
#define APIC_H

#define APIC_APICID      0x20
#define APIC_APICVER     0x30
#define APIC_TASKPRIOR   0x80
#define APIC_EOI     	0x0B0
#define APIC_LDR     	0x0D0
#define APIC_DFR     	0x0E0
#define APIC_SPURIOUS    0x0F0
#define APIC_ESR     	0x280
#define APIC_ICRL        0x300
#define APIC_ICRH        0x310
#define APIC_LVT_TMR     0x320
#define APIC_LVT_PERF    0x340
#define APIC_LVT_LINT0   0x350
#define APIC_LVT_LINT1   0x360
#define APIC_LVT_ERR     0x370
#define APIC_TMRINITCNT  0x380
#define APIC_TMRCURRCNT  0x390
#define APIC_TMRDIV      0x3E0
#define APIC_LAST        0x38F
#define APIC_DISABLE     0x10000
#define APIC_SW_ENABLE   0x100
#define APIC_CPUFOCUS    0x200
#define APIC_NMI     	(4<<8)
#define TMR_PERIODIC     0x20000
#define TMR_BASEDIV      (1<<20)
#define LVT_MASKED       (1<<16)

#include "ACPI/MADT.h"

void init_apic();
void EOI();

void apic_timer_stop();
void apic_timer_oneshot(uint64_t ms, uint8_t vec);


#endif
