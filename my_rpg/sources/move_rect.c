/*
** EPITECH PROJECT, 2021
** move_rect
** File description:
** function that moves the sprite rectangle
*/
#include "../includes/my_rpg.h"

void move_rect(main_t *main, int offset, int max_value)
{
    main->hero->rect.left = main->hero->rect.left + offset;
    if (main->hero->rect.left >= max_value)
        main->hero->rect.left = 0;
    sfSprite_setTextureRect(main->hero->sprite, main->hero->rect);
}
