/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** loading_function
*/
#include "../includes/my_rpg.h"

void loading_function(main_t *main, int i, int dest)
{
    sfTime time;
    float seconds;

    bgm_handling(main->bgm, -1);
    time = sfClock_getElapsedTime(main->wd->clock);
    seconds = time.microseconds / 1000000.0;
    sfRenderWindow_clear(main->wd->window, sfBlack);
    sfRenderWindow_drawText(main->wd->window, main->text[i]->text, NULL);
    if (i == MENU)
        sfRenderWindow_drawText(main->wd->window, \
        main->pnj[1]->text->text, NULL);
    if (seconds > 2) {
        main->state = dest;
        sfClock_restart(main->wd->clock);
    }
}
