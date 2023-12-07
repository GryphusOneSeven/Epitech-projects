/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** village_function
*/
#include "../includes/my_rpg.h"

void village_exit(main_t *main)
{
    if (sfFloatRect_contains(&main->map[1]->exit, \
    main->map[1]->pos.x, main->map[1]->pos.y) == sfTrue)
        loading_function(main, 2, CASTLE);
}

void check_village_boundaries2(main_t *main)
{
    if (main->map[1]->pos.y >= 335) {
        main->map[1]->pos.y -= 4;
        main->pnj[1]->pos.y -= 4;
        main->pnj[2]->pos.y -= 4;
        main->pnj[3]->pos.y -= 4;
    }
    if (main->map[1]->pos.y <= -630) {
        main->map[1]->pos.y += 4;
        main->pnj[1]->pos.y += 4;
        main->pnj[2]->pos.y += 4;
        main->pnj[3]->pos.y += 4;
    }
}

void check_village_boundaries(main_t *main)
{
    if (main->map[1]->pos.x >= 630) {
        main->map[1]->pos.x -= 4;
        main->pnj[1]->pos.x -= 4;
        main->pnj[2]->pos.x -= 4;
        main->pnj[3]->pos.x -= 4;
    }
    if (main->map[1]->pos.x <= -910) {
        main->map[1]->pos.x += 4;
        main->pnj[1]->pos.x += 4;
        main->pnj[2]->pos.x += 4;
        main->pnj[3]->pos.x += 4;
    }
    check_village_boundaries2(main);
    sfSprite_setPosition(main->map[1]->sprite, main->map[1]->pos);
}

void village_function(main_t *main)
{
    main->map[0]->pos = (sfVector2f){350, 200};
    main->pnj[0]->pos = (sfVector2f){1200, 325};
    bgm_handling(main->bgm, 2);
    hero_inputs(main);
    check_village_boundaries(main);
    sfRenderWindow_drawSprite(main->wd->window, main->map[1]->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->hero->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->button[3].sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->pnj[1]->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->pnj[2]->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->pnj[3]->sprite, NULL);
    check_quest(main);
    check_npc(main);
    draw_stats(main);
    village_exit(main);
}
