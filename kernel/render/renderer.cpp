#include <render/renderer.h>
#include <render/frender.h>
#include <drivers/VGA.h>

void filledrect(uint_16 x, uint_8 y, uint_16 width, uint_8 height, uint_8 color) {
    VGA vga;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            vga.PutPixel(x + j, y + i, color);
        }
    }
}

void rect(uint_16 x, uint_8 y, uint_16 width, uint_8 height, uint_8 color) {
    VGA vga;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                vga.PutPixel(x + j, y + i, color);
            }
        }
    }
}

uint_8 strlen(char* str){
    uint_8 i = 0;
    while(str[i] != 0){
    i++;
    }
    return i;
}

void window(uint_16 x, uint_8 y, uint_16 width, uint_8 height, char* title, uint_8 border_color, uint_8 inside_color) {
    uint_8 tlen = strlen(title);
    uint_8 rows = tlen / (width / 16) + (tlen % 16 == 0 ? 0 : 16 );
    filledrect(x, y, width, rows*16, inside_color);
    filledrect(x, y+rows*16, width, height, inside_color);
    renderString(x,y + 2,width/16,0x1,title);
    rect(x, y, width, 16, border_color);
    rect(x, y+rows*16, width, height, border_color);
}