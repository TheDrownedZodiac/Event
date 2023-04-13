/*
 * E89 Pedagogical & Technical Lab
 * project:     tp circle
 * created on:  2022-11-18 - 12:18 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: fonction
 */

#include <lapin.h>
#include "struct.h"

#ifndef STU_H_

#define STU_H_

void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);

void stu_set_pixel(t_bunny_pixelarray *pxa,
                   t_bunny_position *pos,
                   unsigned int color);

unsigned int mk_colour(unsigned char r,
                       unsigned char g,
                       unsigned char b,
                       unsigned char a);

void key_detect(struct display *ds, int keycode, unsigned int color);

#endif