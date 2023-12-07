/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_title
*/
#include "../includes/my_rpg.h"

void draw_title(main_t *game)
{
    sfVector2f pos = {310, 120};
    sfVector2f scale = {1.5, 1.5};
    sfText *title = sfText_create();
    sfFont *font = sfFont_createFromFile("assets/font1.ttf");
    char *str = "\t\tThe Elder Scrolls XLII :\n\t\t\t\tLight Souls";

    sfText_setString(title, str);
    sfText_setScale(title, scale);
    sfText_setPosition(title, pos);
    sfText_setFont(title, font);
    sfText_setColor(title, sfBlack);
    sfRenderWindow_drawText(game->wd->window, title, NULL);
}
