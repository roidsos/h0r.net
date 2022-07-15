#include <io.h>
#include <gdt/gdt.h>
#include <drivers/PIT.h>
#include <interrupts/IDT.h>
#include <memory/Heap.h>
#include <memory/memory.h>
//#include <drivers/ata.h>
#include <drivers/pc-speaker.h>
extern "C" int kernel_main(){
     //pcspeaker sp;
    //GDT gdt;
//     InitHeap(0x100000,0x100000);
    // sp.play_sound(1000);
     // sp.beep();

//     inb8(0x3DA); // to index state
//     outb8(0x3C0, 0x10); // register index
//     uint_8 value = inb8(0x3C1);
//     print(hex2str((uint_64)value));
//     return;
//     inb8(0x3DA);
//     outb8(0x3C0, 0x10);
//     outb8(0x3C0, value & 0b11110111 || 0b000000100); // disable 4th bit (numbering from 1) to go to 16 background colors


//     Clearscr(0x1f);
//     setCursorpos(27);
//     print("The blue screen of death!",0x1f);
//     setCursorpos(320);
//     print("something went wrong with your device",0x1f);
//     setCursorpos(80 * 24);
//     print("                                                                                ",0xf1);
    Clearscr(0x0F);
    //print("Hello, World!\n", 0xAF);
    InitIDT();


    while(1){
        //print(hex2str(PIT::tickssincestart));
        //setCursorpos(0);
        
    }
}