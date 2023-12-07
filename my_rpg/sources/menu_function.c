/*
** EPITECH PROJECT, 2022
** WIP
** File description:
** menu_function
*/
#include "../includes/my_rpg.h"

void menu_function(main_t *main)
{
    sfRenderWindow_drawSprite(main->wd->window, main->bg[0]->sprite, NULL);
    draw_title(main);
    sfSprite_setTextureRect(main->button[0].sprite, main->button[0].rect);
    sfSprite_setTextureRect(main->button[1].sprite, main->button[1].rect);
    sfRenderWindow_drawSprite(main->wd->window, main->button[0].sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->button[1].sprite, NULL);
    bgm_handling(main->bgm, 0);
}
