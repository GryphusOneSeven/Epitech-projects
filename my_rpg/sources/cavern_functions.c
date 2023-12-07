/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** cavern_funtion
*/
#include "../includes/my_rpg.h"

void cavern_exit(main_t *main)
{
    if (sfFloatRect_contains(&main->map[0]->exit, \
    main->map[0]->pos.x, main->map[0]->pos.y) == sfTrue)
        loading_function(main, 1, VILLAGE);
}

void check_cavern_boundaries(main_t *main)
{
    if (main->map[0]->pos.x >= 630) {
        main->map[0]->pos.x -= 4;
        main->pnj[0]->pos.x -= 4;
    }
    if (main->map[0]->pos.x <= -1195) {
        main->map[0]->pos.x += 4;
        main->pnj[0]->pos.x += 4;
    }
    if (main->map[0]->pos.y >= 360) {
        main->map[0]->pos.y -= 4;
        main->pnj[0]->pos.y -= 4;
    }
    if (main->map[0]->pos.y <= -636) {
        main->map[0]->pos.y += 4;
        main->pnj[0]->pos.y += 4;
    }
    sfSprite_setPosition(main->map[0]->sprite, main->map[0]->pos);
}

void check_npc(main_t *main)
{
    if (sfFloatRect_contains(&main->pnj[0]->zone, \
    main->map[0]->pos.x, main->map[0]->pos.y)) {
        sfRenderWindow_drawText(main->wd->window, \
        main->pnj[0]->text->text, NULL);
        main->quest = 1;
    }
    if (sfFloatRect_contains(&main->pnj[3]->zone, \
    main->map[1]->pos.x, main->map[1]->pos.y))
        sfRenderWindow_drawText(main->wd->window, \
        main->pnj[2]->text->text, NULL);
    if (sfFloatRect_contains(&main->pnj[2]->zone, \
    main->map[1]->pos.x, main->map[1]->pos.y))
        sfRenderWindow_drawText(main->wd->window, \
        main->pnj[3]->text->text, NULL);
}

void cavern_function(main_t *main)
{
    main->rd = rand() % 3;
    hero_inputs(main);
    activating_combat_mode(main);
    bgm_handling(main->bgm, 1);
    check_cavern_boundaries(main);
    sfRenderWindow_drawSprite(main->wd->window, main->map[0]->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->hero->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->button[3].sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->pnj[0]->sprite, NULL);
    check_quest(main);
    check_npc(main);
    draw_stats(main);
    cavern_exit(main);
}
