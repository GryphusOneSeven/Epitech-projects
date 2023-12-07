/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** quest_function
*/
#include "../includes/my_rpg.h"

void check_quest(main_t *main)
{
    if (main->quest != 0)
        sfRenderWindow_drawSprite(main->wd->window, \
        main->button[6].sprite, NULL);
}
