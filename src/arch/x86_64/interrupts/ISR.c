#include <arch/x86_64/interrupts/IDT.h>
#include <arch/x86_64/interrupts/ISR.h>
#include <utils/error.h>
#include <vendor/printf.h>

void ISR0();
void ISR1();
void ISR2();
void ISR3();
void ISR4();
void ISR5();
void ISR6();
void ISR7();
void ISR8();
void ISR9();
void ISR10();
void ISR11();
void ISR12();
void ISR13();
void ISR14();
void ISR15();
void ISR16();
void ISR17();
void ISR18();
void ISR19();
void ISR20();
void ISR21();
void ISR22();
void ISR23();
void ISR24();
void ISR25();
void ISR26();
void ISR27();
void ISR28();
void ISR29();
void ISR30();
void ISR31();
void ISR32();
void ISR33();
void ISR34();
void ISR35();
void ISR36();
void ISR37();
void ISR38();
void ISR39();
void ISR40();
void ISR41();
void ISR42();
void ISR43();
void ISR44();
void ISR45();
void ISR46();
void ISR47();
void ISR48();
void ISR49();
void ISR50();
void ISR51();
void ISR52();
void ISR53();
void ISR54();
void ISR55();
void ISR56();
void ISR57();
void ISR58();
void ISR59();
void ISR60();
void ISR61();
void ISR62();
void ISR63();
void ISR64();
void ISR65();
void ISR66();
void ISR67();
void ISR68();
void ISR69();
void ISR70();
void ISR71();
void ISR72();
void ISR73();
void ISR74();
void ISR75();
void ISR76();
void ISR77();
void ISR78();
void ISR79();
void ISR80();
void ISR81();
void ISR82();
void ISR83();
void ISR84();
void ISR85();
void ISR86();
void ISR87();
void ISR88();
void ISR89();
void ISR90();
void ISR91();
void ISR92();
void ISR93();
void ISR94();
void ISR95();
void ISR96();
void ISR97();
void ISR98();
void ISR99();
void ISR100();
void ISR101();
void ISR102();
void ISR103();
void ISR104();
void ISR105();
void ISR106();
void ISR107();
void ISR108();
void ISR109();
void ISR110();
void ISR111();
void ISR112();
void ISR113();
void ISR114();
void ISR115();
void ISR116();
void ISR117();
void ISR118();
void ISR119();
void ISR120();
void ISR121();
void ISR122();
void ISR123();
void ISR124();
void ISR125();
void ISR126();
void ISR127();
void ISR128();
void ISR129();
void ISR130();
void ISR131();
void ISR132();
void ISR133();
void ISR134();
void ISR135();
void ISR136();
void ISR137();
void ISR138();
void ISR139();
void ISR140();
void ISR141();
void ISR142();
void ISR143();
void ISR144();
void ISR145();
void ISR146();
void ISR147();
void ISR148();
void ISR149();
void ISR150();
void ISR151();
void ISR152();
void ISR153();
void ISR154();
void ISR155();
void ISR156();
void ISR157();
void ISR158();
void ISR159();
void ISR160();
void ISR161();
void ISR162();
void ISR163();
void ISR164();
void ISR165();
void ISR166();
void ISR167();
void ISR168();
void ISR169();
void ISR170();
void ISR171();
void ISR172();
void ISR173();
void ISR174();
void ISR175();
void ISR176();
void ISR177();
void ISR178();
void ISR179();
void ISR180();
void ISR181();
void ISR182();
void ISR183();
void ISR184();
void ISR185();
void ISR186();
void ISR187();
void ISR188();
void ISR189();
void ISR190();
void ISR191();
void ISR192();
void ISR193();
void ISR194();
void ISR195();
void ISR196();
void ISR197();
void ISR198();
void ISR199();
void ISR200();
void ISR201();
void ISR202();
void ISR203();
void ISR204();
void ISR205();
void ISR206();
void ISR207();
void ISR208();
void ISR209();
void ISR210();
void ISR211();
void ISR212();
void ISR213();
void ISR214();
void ISR215();
void ISR216();
void ISR217();
void ISR218();
void ISR219();
void ISR220();
void ISR221();
void ISR222();
void ISR223();
void ISR224();
void ISR225();
void ISR226();
void ISR227();
void ISR228();
void ISR229();
void ISR230();
void ISR231();
void ISR232();
void ISR233();
void ISR234();
void ISR235();
void ISR236();
void ISR237();
void ISR238();
void ISR239();
void ISR240();
void ISR241();
void ISR242();
void ISR243();
void ISR244();
void ISR245();
void ISR246();
void ISR247();
void ISR248();
void ISR249();
void ISR250();
void ISR251();
void ISR252();
void ISR253();
void ISR254();
void ISR255();

ISRHandler ISRHandlers[255];

void ISR_RegisterHandler(int irq, ISRHandler handler) {
    ISRHandlers[irq] = handler;
}
void ISR_Handler(Registers *regs) {
    if (regs->interrupt < 32) {
        trigger_psod(regs->interrupt, "interrupt error UwU", regs);
        return;
    }
    if (ISRHandlers[regs->interrupt] != 0) {
        ISRHandlers[regs->interrupt](regs);
    } else {
        dprintf("ISR Handler #%i used while not present", regs->interrupt);
    }
}

void init_ISR() {
    SetGate(0, ISR0, 8, 0b10001110);
    SetGate(1, ISR1, 8, 0b10001110);
    SetGate(2, ISR2, 8, 0b10001110);
    SetGate(3, ISR3, 8, 0b10001110);
    SetGate(4, ISR4, 8, 0b10001110);
    SetGate(5, ISR5, 8, 0b10001110);
    SetGate(6, ISR6, 8, 0b10001110);
    SetGate(7, ISR7, 8, 0b10001110);
    SetGate(8, ISR8, 8, 0b10001110);
    SetGate(9, ISR9, 8, 0b10001110);
    SetGate(10, ISR10, 8, 0b10001110);
    SetGate(11, ISR11, 8, 0b10001110);
    SetGate(12, ISR12, 8, 0b10001110);
    SetGate(13, ISR13, 8, 0b10001110);
    SetGate(14, ISR14, 8, 0b10001110);
    SetGate(15, ISR15, 8, 0b10001110);
    SetGate(16, ISR16, 8, 0b10001110);
    SetGate(17, ISR17, 8, 0b10001110);
    SetGate(18, ISR18, 8, 0b10001110);
    SetGate(19, ISR19, 8, 0b10001110);
    SetGate(20, ISR20, 8, 0b10001110);
    SetGate(21, ISR21, 8, 0b10001110);
    SetGate(22, ISR22, 8, 0b10001110);
    SetGate(23, ISR23, 8, 0b10001110);
    SetGate(24, ISR24, 8, 0b10001110);
    SetGate(25, ISR25, 8, 0b10001110);
    SetGate(26, ISR26, 8, 0b10001110);
    SetGate(27, ISR27, 8, 0b10001110);
    SetGate(28, ISR28, 8, 0b10001110);
    SetGate(29, ISR29, 8, 0b10001110);
    SetGate(30, ISR30, 8, 0b10001110);
    SetGate(31, ISR31, 8, 0b10001110);
    SetGate(32, ISR32, 8, 0b10001110);
    SetGate(33, ISR33, 8, 0b10001110);
    SetGate(34, ISR34, 8, 0b10001110);
    SetGate(35, ISR35, 8, 0b10001110);
    SetGate(36, ISR36, 8, 0b10001110);
    SetGate(37, ISR37, 8, 0b10001110);
    SetGate(38, ISR38, 8, 0b10001110);
    SetGate(39, ISR39, 8, 0b10001110);
    SetGate(40, ISR40, 8, 0b10001110);
    SetGate(41, ISR41, 8, 0b10001110);
    SetGate(42, ISR42, 8, 0b10001110);
    SetGate(43, ISR43, 8, 0b10001110);
    SetGate(44, ISR44, 8, 0b10001110);
    SetGate(45, ISR45, 8, 0b10001110);
    SetGate(46, ISR46, 8, 0b10001110);
    SetGate(47, ISR47, 8, 0b10001110);
    SetGate(48, ISR48, 8, 0b10001110);
    SetGate(49, ISR49, 8, 0b10001110);
    SetGate(50, ISR50, 8, 0b10001110);
    SetGate(51, ISR51, 8, 0b10001110);
    SetGate(52, ISR52, 8, 0b10001110);
    SetGate(53, ISR53, 8, 0b10001110);
    SetGate(54, ISR54, 8, 0b10001110);
    SetGate(55, ISR55, 8, 0b10001110);
    SetGate(56, ISR56, 8, 0b10001110);
    SetGate(57, ISR57, 8, 0b10001110);
    SetGate(58, ISR58, 8, 0b10001110);
    SetGate(59, ISR59, 8, 0b10001110);
    SetGate(60, ISR60, 8, 0b10001110);
    SetGate(61, ISR61, 8, 0b10001110);
    SetGate(62, ISR62, 8, 0b10001110);
    SetGate(63, ISR63, 8, 0b10001110);
    SetGate(64, ISR64, 8, 0b10001110);
    SetGate(65, ISR65, 8, 0b10001110);
    SetGate(66, ISR66, 8, 0b10001110);
    SetGate(67, ISR67, 8, 0b10001110);
    SetGate(68, ISR68, 8, 0b10001110);
    SetGate(69, ISR69, 8, 0b10001110);
    SetGate(70, ISR70, 8, 0b10001110);
    SetGate(71, ISR71, 8, 0b10001110);
    SetGate(72, ISR72, 8, 0b10001110);
    SetGate(73, ISR73, 8, 0b10001110);
    SetGate(74, ISR74, 8, 0b10001110);
    SetGate(75, ISR75, 8, 0b10001110);
    SetGate(76, ISR76, 8, 0b10001110);
    SetGate(77, ISR77, 8, 0b10001110);
    SetGate(78, ISR78, 8, 0b10001110);
    SetGate(79, ISR79, 8, 0b10001110);
    SetGate(80, ISR80, 8, 0b10001110);
    SetGate(81, ISR81, 8, 0b10001110);
    SetGate(82, ISR82, 8, 0b10001110);
    SetGate(83, ISR83, 8, 0b10001110);
    SetGate(84, ISR84, 8, 0b10001110);
    SetGate(85, ISR85, 8, 0b10001110);
    SetGate(86, ISR86, 8, 0b10001110);
    SetGate(87, ISR87, 8, 0b10001110);
    SetGate(88, ISR88, 8, 0b10001110);
    SetGate(89, ISR89, 8, 0b10001110);
    SetGate(90, ISR90, 8, 0b10001110);
    SetGate(91, ISR91, 8, 0b10001110);
    SetGate(92, ISR92, 8, 0b10001110);
    SetGate(93, ISR93, 8, 0b10001110);
    SetGate(94, ISR94, 8, 0b10001110);
    SetGate(95, ISR95, 8, 0b10001110);
    SetGate(96, ISR96, 8, 0b10001110);
    SetGate(97, ISR97, 8, 0b10001110);
    SetGate(98, ISR98, 8, 0b10001110);
    SetGate(99, ISR99, 8, 0b10001110);
    SetGate(100, ISR100, 8, 0b10001110);
    SetGate(101, ISR101, 8, 0b10001110);
    SetGate(102, ISR102, 8, 0b10001110);
    SetGate(103, ISR103, 8, 0b10001110);
    SetGate(104, ISR104, 8, 0b10001110);
    SetGate(105, ISR105, 8, 0b10001110);
    SetGate(106, ISR106, 8, 0b10001110);
    SetGate(107, ISR107, 8, 0b10001110);
    SetGate(108, ISR108, 8, 0b10001110);
    SetGate(109, ISR109, 8, 0b10001110);
    SetGate(110, ISR110, 8, 0b10001110);
    SetGate(111, ISR111, 8, 0b10001110);
    SetGate(112, ISR112, 8, 0b10001110);
    SetGate(113, ISR113, 8, 0b10001110);
    SetGate(114, ISR114, 8, 0b10001110);
    SetGate(115, ISR115, 8, 0b10001110);
    SetGate(116, ISR116, 8, 0b10001110);
    SetGate(117, ISR117, 8, 0b10001110);
    SetGate(118, ISR118, 8, 0b10001110);
    SetGate(119, ISR119, 8, 0b10001110);
    SetGate(120, ISR120, 8, 0b10001110);
    SetGate(121, ISR121, 8, 0b10001110);
    SetGate(122, ISR122, 8, 0b10001110);
    SetGate(123, ISR123, 8, 0b10001110);
    SetGate(124, ISR124, 8, 0b10001110);
    SetGate(125, ISR125, 8, 0b10001110);
    SetGate(126, ISR126, 8, 0b10001110);
    SetGate(127, ISR127, 8, 0b10001110);
    SetGate(128, ISR128, 8, 0b10001110);
    SetGate(129, ISR129, 8, 0b10001110);
    SetGate(130, ISR130, 8, 0b10001110);
    SetGate(131, ISR131, 8, 0b10001110);
    SetGate(132, ISR132, 8, 0b10001110);
    SetGate(133, ISR133, 8, 0b10001110);
    SetGate(134, ISR134, 8, 0b10001110);
    SetGate(135, ISR135, 8, 0b10001110);
    SetGate(136, ISR136, 8, 0b10001110);
    SetGate(137, ISR137, 8, 0b10001110);
    SetGate(138, ISR138, 8, 0b10001110);
    SetGate(139, ISR139, 8, 0b10001110);
    SetGate(140, ISR140, 8, 0b10001110);
    SetGate(141, ISR141, 8, 0b10001110);
    SetGate(142, ISR142, 8, 0b10001110);
    SetGate(143, ISR143, 8, 0b10001110);
    SetGate(144, ISR144, 8, 0b10001110);
    SetGate(145, ISR145, 8, 0b10001110);
    SetGate(146, ISR146, 8, 0b10001110);
    SetGate(147, ISR147, 8, 0b10001110);
    SetGate(148, ISR148, 8, 0b10001110);
    SetGate(149, ISR149, 8, 0b10001110);
    SetGate(150, ISR150, 8, 0b10001110);
    SetGate(151, ISR151, 8, 0b10001110);
    SetGate(152, ISR152, 8, 0b10001110);
    SetGate(153, ISR153, 8, 0b10001110);
    SetGate(154, ISR154, 8, 0b10001110);
    SetGate(155, ISR155, 8, 0b10001110);
    SetGate(156, ISR156, 8, 0b10001110);
    SetGate(157, ISR157, 8, 0b10001110);
    SetGate(158, ISR158, 8, 0b10001110);
    SetGate(159, ISR159, 8, 0b10001110);
    SetGate(160, ISR160, 8, 0b10001110);
    SetGate(161, ISR161, 8, 0b10001110);
    SetGate(162, ISR162, 8, 0b10001110);
    SetGate(163, ISR163, 8, 0b10001110);
    SetGate(164, ISR164, 8, 0b10001110);
    SetGate(165, ISR165, 8, 0b10001110);
    SetGate(166, ISR166, 8, 0b10001110);
    SetGate(167, ISR167, 8, 0b10001110);
    SetGate(168, ISR168, 8, 0b10001110);
    SetGate(169, ISR169, 8, 0b10001110);
    SetGate(170, ISR170, 8, 0b10001110);
    SetGate(171, ISR171, 8, 0b10001110);
    SetGate(172, ISR172, 8, 0b10001110);
    SetGate(173, ISR173, 8, 0b10001110);
    SetGate(174, ISR174, 8, 0b10001110);
    SetGate(175, ISR175, 8, 0b10001110);
    SetGate(176, ISR176, 8, 0b10001110);
    SetGate(177, ISR177, 8, 0b10001110);
    SetGate(178, ISR178, 8, 0b10001110);
    SetGate(179, ISR179, 8, 0b10001110);
    SetGate(180, ISR180, 8, 0b10001110);
    SetGate(181, ISR181, 8, 0b10001110);
    SetGate(182, ISR182, 8, 0b10001110);
    SetGate(183, ISR183, 8, 0b10001110);
    SetGate(184, ISR184, 8, 0b10001110);
    SetGate(185, ISR185, 8, 0b10001110);
    SetGate(186, ISR186, 8, 0b10001110);
    SetGate(187, ISR187, 8, 0b10001110);
    SetGate(188, ISR188, 8, 0b10001110);
    SetGate(189, ISR189, 8, 0b10001110);
    SetGate(190, ISR190, 8, 0b10001110);
    SetGate(191, ISR191, 8, 0b10001110);
    SetGate(192, ISR192, 8, 0b10001110);
    SetGate(193, ISR193, 8, 0b10001110);
    SetGate(194, ISR194, 8, 0b10001110);
    SetGate(195, ISR195, 8, 0b10001110);
    SetGate(196, ISR196, 8, 0b10001110);
    SetGate(197, ISR197, 8, 0b10001110);
    SetGate(198, ISR198, 8, 0b10001110);
    SetGate(199, ISR199, 8, 0b10001110);
    SetGate(200, ISR200, 8, 0b10001110);
    SetGate(201, ISR201, 8, 0b10001110);
    SetGate(202, ISR202, 8, 0b10001110);
    SetGate(203, ISR203, 8, 0b10001110);
    SetGate(204, ISR204, 8, 0b10001110);
    SetGate(205, ISR205, 8, 0b10001110);
    SetGate(206, ISR206, 8, 0b10001110);
    SetGate(207, ISR207, 8, 0b10001110);
    SetGate(208, ISR208, 8, 0b10001110);
    SetGate(209, ISR209, 8, 0b10001110);
    SetGate(210, ISR210, 8, 0b10001110);
    SetGate(211, ISR211, 8, 0b10001110);
    SetGate(212, ISR212, 8, 0b10001110);
    SetGate(213, ISR213, 8, 0b10001110);
    SetGate(214, ISR214, 8, 0b10001110);
    SetGate(215, ISR215, 8, 0b10001110);
    SetGate(216, ISR216, 8, 0b10001110);
    SetGate(217, ISR217, 8, 0b10001110);
    SetGate(218, ISR218, 8, 0b10001110);
    SetGate(219, ISR219, 8, 0b10001110);
    SetGate(220, ISR220, 8, 0b10001110);
    SetGate(221, ISR221, 8, 0b10001110);
    SetGate(222, ISR222, 8, 0b10001110);
    SetGate(223, ISR223, 8, 0b10001110);
    SetGate(224, ISR224, 8, 0b10001110);
    SetGate(225, ISR225, 8, 0b10001110);
    SetGate(226, ISR226, 8, 0b10001110);
    SetGate(227, ISR227, 8, 0b10001110);
    SetGate(228, ISR228, 8, 0b10001110);
    SetGate(229, ISR229, 8, 0b10001110);
    SetGate(230, ISR230, 8, 0b10001110);
    SetGate(231, ISR231, 8, 0b10001110);
    SetGate(232, ISR232, 8, 0b10001110);
    SetGate(233, ISR233, 8, 0b10001110);
    SetGate(234, ISR234, 8, 0b10001110);
    SetGate(235, ISR235, 8, 0b10001110);
    SetGate(236, ISR236, 8, 0b10001110);
    SetGate(237, ISR237, 8, 0b10001110);
    SetGate(238, ISR238, 8, 0b10001110);
    SetGate(239, ISR239, 8, 0b10001110);
    SetGate(240, ISR240, 8, 0b10001110);
    SetGate(241, ISR241, 8, 0b10001110);
    SetGate(242, ISR242, 8, 0b10001110);
    SetGate(243, ISR243, 8, 0b10001110);
    SetGate(244, ISR244, 8, 0b10001110);
    SetGate(245, ISR245, 8, 0b10001110);
    SetGate(246, ISR246, 8, 0b10001110);
    SetGate(247, ISR247, 8, 0b10001110);
    SetGate(248, ISR248, 8, 0b10001110);
    SetGate(249, ISR249, 8, 0b10001110);
    SetGate(250, ISR250, 8, 0b10001110);
    SetGate(251, ISR251, 8, 0b10001110);
    SetGate(252, ISR252, 8, 0b10001110);
    SetGate(253, ISR253, 8, 0b10001110);
    SetGate(254, ISR254, 8, 0b10001110);
    SetGate(255, ISR255, 8, 0b10001110);
}
