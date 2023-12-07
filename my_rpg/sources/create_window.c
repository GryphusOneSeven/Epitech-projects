/*
** EPITECH PROJECT, 2022
** create_window.c
** File description:
** create window
*/
#include "../includes/my_rpg.h"

wd_t *create_window(void)
{
    wd_t *game_window = malloc(sizeof(wd_t));
    game_window->clock = sfClock_create();
    game_window->video_mode.width = 1280;
    game_window->video_mode.height = 720;
    game_window->video_mode.bitsPerPixel = 32;
    game_window->window = sfRenderWindow_create(game_window->video_mode,
    "my_rpg", sfClose, NULL);

    sfRenderWindow_setFramerateLimit(game_window->window, 60);
    return (game_window);
}
