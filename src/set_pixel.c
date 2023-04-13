/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-08 - 09:53 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: set pixel
 */

#include <lapin.h>

void stu_set_pixel(t_bunny_pixelarray *pxa,
                   t_bunny_position *pos,
                   unsigned int color)
{
    int i;
    int width;
    int height;
    unsigned int *tmp;

    width = pxa->clipable.clip_width;
    height = pxa->clipable.clip_height;
    tmp = (unsigned int *) pxa -> pixels;
    i = (width * pos->y) + pos->x;
    if ((pos->y <= height && pos->y >= 0) && 
        (pos->x <= width && pos->x >= 0)) {
        tmp[i] = color;
    }
}