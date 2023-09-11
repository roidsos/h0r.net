#ifndef __PFA_H__
#define __PFA_H__

#include "Memory.h"
#include "types/bitmap.h"
#include <limine.h>

void PFA_init();
void free_pages(void* addr,size_t num);
void lock_pages(void* addr,size_t num);

size_t get_free_RAM();
size_t get_used_RAM();
size_t get_reserved_RAM();
size_t get_total_RAM();
size_t get_highest_block();

void* request_page();
void* request_pages(int num);
#endif // __PFA_H__