/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** game_function
*/
#include "../includes/my_rpg.h"

void game_function(main_t *main)
{
    if (main->state == CAVERN)
        cavern_function(main);
    if (main->state == VILLAGE)
        village_function(main);
    if (main->state == BATTLE)
        battle_function(main);
    if (main->state == CASTLE)
        castle_function(main);
    if (main->state == LOADING)
        loading_function(main, 0, CAVERN);
    if (main->state == QUIT)
        sfRenderWindow_close(main->wd->window);
}
