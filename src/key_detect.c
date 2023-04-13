/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-08 - 09:49 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: key detect
 */

#include <lapin.h>
#include "fonction.h"

void key_detect(struct display *ds, int keycode, unsigned int color)
{
    if (keycode == BKS_Z) {
        clear_pixelarray(ds->ds_px, mk_colour(0, 0, 0, 1));
        ds->origin.pos.y -= ds->origin.path_size;
        stu_set_pixel(ds->ds_px, &ds->origin.pos, color);
    } else if (keycode == BKS_Q) {
        clear_pixelarray(ds->ds_px, mk_colour(0, 0, 0, 1));
        ds->origin.pos.x -= ds->origin.path_size;
        stu_set_pixel(ds->ds_px, &ds->origin.pos, color);
    } else if (keycode == BKS_S) {
        clear_pixelarray(ds->ds_px, mk_colour(0, 0, 0, 1));
        ds->origin.pos.y += ds->origin.path_size;
        stu_set_pixel(ds->ds_px, &ds->origin.pos, color);
    } else if (keycode == BKS_D) {
        clear_pixelarray(ds->ds_px, mk_colour(0, 0, 0, 1));
        ds->origin.pos.x += ds->origin.path_size;
        stu_set_pixel(ds->ds_px, &ds->origin.pos, color);
    }
}