/*
 * E89 Pedagogical & Technical Lab
 * project:     learning liblapin
 * created on:  2022-09-29 - 14:39 +0200
 * 1st author:  Élise C. Philippe - eriizu
 * description: events on a window
 */

#include <lapin.h>
#include "fonction.h"

void blit_at_origin(struct display *ds)
{
    t_bunny_position pos;

    pos.x = 0;
    pos.y = 0;
    bunny_blit(&ds->ds_win->buffer, &ds->ds_px->clipable, &pos);
    bunny_display(ds->ds_win);
}

t_bunny_response key_event(t_bunny_event_state state,
                           t_bunny_keysym keycode,
                           void *data)
{
    struct display *ds;
    
    ds = data;
    ds->origin.path_size = 10;
    if (state == GO_UP) {
        return (GO_ON);
    }
    if (keycode == BKS_ESCAPE) {
        return (EXIT_ON_SUCCESS);
    } else if (keycode == BKS_Z) {
        key_detect(ds, keycode, WHITE);
    } else if (keycode == BKS_Q) {
        key_detect(ds, keycode, WHITE);
    } else if (keycode == BKS_S) {
        key_detect(ds, keycode, WHITE);
    } else if (keycode == BKS_D) {
        key_detect(ds, keycode, WHITE);
    }
    blit_at_origin(ds);
    return (GO_ON);
}

int main(void)
{
    int height;
    int width;
    struct display display;

    height = 800;
    width = 800;
    display.ds_win = bunny_start(width, height, false, "fl: tp event");
    display.ds_px = bunny_new_pixelarray(width, height);
    display.origin.pos.x = 400;
    display.origin.pos.y = 400;
    clear_pixelarray(display.ds_px, mk_colour(0, 0, 0, 1));
    stu_set_pixel(display.ds_px, &display.origin.pos, WHITE);
    blit_at_origin(&display);
    bunny_set_key_response(key_event);
    bunny_loop(display.ds_win, 30, &display);
    return (0);
}