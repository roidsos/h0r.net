#ifndef __INIT_H__
#define __INIT_H__
#include <limine.h>

void init_HW();
void init_sched();
void init_sys();
void load_initramfs(struct limine_file* tar_file);

#endif // __INIT_H__