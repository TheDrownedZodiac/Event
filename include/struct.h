/*
 * E89 Pedagogical & Technical Lab
 * project:     surface
 * created on:  2022-11-18 - 12:19 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: struct
 */

#include <lapin.h>

#ifndef STU_STRUCT_H_

#define STU_STRUCT_H_

struct bunny {
    int width;
    int height;
    int path_size;
    t_bunny_position pos;
};

struct display {
    struct bunny origin;
    t_bunny_window *ds_win;
    t_bunny_pixelarray *ds_px;
};

#endif