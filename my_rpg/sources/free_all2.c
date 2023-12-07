/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** free_all2
*/
#include "../includes/my_rpg.h"

void destroy_texts(main_t *main)
{
    for (int i = 0; i != 3; i++) {
        sfFont_destroy(main->text[i]->font);
        sfText_destroy(main->text[i]->text);
        free(main->text[i]);
    }
}

void destroy_backgrounds(main_t *main)
{
    for (int i = 0; i != 4; i++) {
        sfTexture_destroy(main->bg[i]->texture);
        sfSprite_destroy(main->bg[i]->sprite);
        free(main->bg[i]);
    }
    free(main->bg);
}

void destroy_enemies(main_t *main)
{
    int i = 0;

    while (i != 3) {
        sfTexture_destroy(main->enemies[i]->texture);
        sfSprite_destroy(main->enemies[i]->sprite);
        free(main->enemies[i]);
    }
    free(main->enemies);
}

void destroy_maps(main_t *main)
{
    int i = 0;

    while (i != 3) {
        sfTexture_destroy(main->map[i]->texture);
        sfSprite_destroy(main->map[i]->sprite);
        free(main->map[i]);
    }
    free(main->map);
}
