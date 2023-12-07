/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_background
*/
#include "../includes/my_rpg.h"

bg_t *create_background(char *filepath, float s)
{
    sfVector2f scale = {s, s};
    bg_t *bg = malloc(sizeof(bg_t));
    bg->sprite = sfSprite_create();
    bg->texture = sfTexture_createFromFile(filepath, NULL);

    sfSprite_setTexture(bg->sprite, bg->texture, sfTrue);
    sfSprite_setScale(bg->sprite, scale);
    return (bg);
}

bg_t **create_all_backgrounds(void)
{
    bg_t **bg = malloc(sizeof(bg_t) * 5);

    bg[0] = create_background("assets/bg/menu.png", 1);
    bg[1] = create_background("assets/bg/cavern.png", 2.4);
    bg[2] = create_background("assets/bg/village.png", 1);
    bg[3] = create_background("assets/bg/castle.png", 1);
    bg[4] = NULL;
    return (bg);
}
