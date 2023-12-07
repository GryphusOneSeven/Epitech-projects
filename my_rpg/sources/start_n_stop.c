/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** start_n_stop
*/
#include "../includes/my_rpg.h"

void pressed_out(main_t *game, int ofset)
{
    if (ofset == 486) {
        (game->state) = QUIT;
        game->button[1].rect.left = ofset;
    } else
        game->button[1].rect.left = 243;
}

int on_close(main_t *game, int ofset)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->wd->window);
    sfFloatRect pos_play = sfSprite_getGlobalBounds(game->button[0].sprite);
    sfFloatRect pos_quit = sfSprite_getGlobalBounds(game->button[1].sprite);

    if (sfFloatRect_contains(&pos_play, mouse_pos.x, mouse_pos.y)) {
        if (ofset == 486) {
            sfClock_restart(game->wd->clock);
            (game->state) = LOADING;
            game->button[0].rect.left = ofset;
        } else
            game->button[0].rect.left = 243;
    } else
        game->button[0].rect.left = 0;
    if (sfFloatRect_contains(&pos_quit, mouse_pos.x, mouse_pos.y)) {
        pressed_out(game, ofset);
    } else
        game->button[1].rect.left = 0;
    return 0;
}
