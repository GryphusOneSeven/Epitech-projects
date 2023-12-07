/*
** EPITECH PROJECT, 2021
** clock_for_rect.c
** File description:
** function that animates the sprite after a certain time
*/
#include "../includes/my_rpg.h"

void clock_for_rect(main_t *main)
{
    sfTime time;
    float seconds;

    time = sfClock_getElapsedTime(main->wd->clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.10) {
        move_rect(main, 21, 80);
        sfClock_restart(main->wd->clock);
    }
}
