/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** castle_functions
*/
#include "../includes/my_rpg.h"

void castle_exit(main_t *main, int i)
{
    if (sfFloatRect_contains(&main->map[i]->exit,\
    main->map[i]->pos.x, main->map[i]->pos.y) == sfTrue)
        loading_function(main, 3, QUIT);
}

void check_castle_boundaries(main_t *main)
{
    if (main->map[2]->pos.x >= 530) {
        main->map[2]->pos.x -= 4;
        main->enemies[3]->pos.x -= 4;
        }
    if (main->map[2]->pos.x <= -3937) {
        main->map[2]->pos.x += 4;
        main->enemies[3]->pos.x += 4;
        }
    if (main->map[2]->pos.y >= -2532) {
        main->map[2]->pos.y -= 4;
        main->enemies[3]->pos.y -= 4;
        }
    if (main->map[2]->pos.y <= -40) {
        main->map[2]->pos.y += 4;
        main->enemies[3]->pos.y += 4;
        }
    sfSprite_setPosition(main->map[2]->sprite, main->map[2]->pos);
}

void castle_function(main_t *main)
{
    main->map[1]->pos = (sfVector2f){350, 200};
    main->pnj[1]->pos = (sfVector2f){1875, 475};
    main->pnj[2]->pos = (sfVector2f){1500, 320};
    hero_inputs(main);
    check_castle_boundaries(main);
    bgm_handling(main->bgm, 3);
    sfRenderWindow_drawSprite(main->wd->window, main->map[2]->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->hero->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window,\
    main->enemies[3]->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->button[3].sprite, NULL);
    check_quest(main);
    draw_stats(main);
    castle_exit(main, 2);
}
