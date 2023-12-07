/*
** EPITECH PROJECT, 2022
** Graphical Programmation
** File description:
** free_all
*/
#include "../includes/my_rpg.h"

void destroy_bgm(main_t *main)
{
    int i = 0;

    while (i != 6) {
        sfMusic_destroy(main->bgm[i]);
        i++;
    }
    free(main->bgm);
}

void destroy_window(main_t *main)
{
    sfClock_destroy(main->wd->clock);
    sfRenderWindow_destroy(main->wd->window);
    free(main->wd);
}

void destroy_hero(main_t *main)
{
    sfSprite_destroy(main->hero->sprite);
    sfTexture_destroy(main->hero->texture);
    free(main->hero);
}

void free_all(main_t *main)
{
    destroy_bgm(main);
    destroy_window(main);
    destroy_hero(main);
    destroy_texts(main);
    free(main->button);
}
