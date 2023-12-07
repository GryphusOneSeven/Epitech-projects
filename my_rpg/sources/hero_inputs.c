/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** hero_inputs
*/
#include "../includes/my_rpg.h"

void right_pressed(main_t *main, int s)
{
    main->hero->rect.top = 87;
    clock_for_rect(main);
    main->map[s - 1]->pos.x = main->map[s - 1]->pos.x - 4;
    sfSprite_setPosition(main->map[s - 1]->sprite, main->map[s - 1]->pos);
    if (s == 1) {
        main->pnj[0]->pos.x = main->pnj[0]->pos.x - 4;
        sfSprite_setPosition(main->pnj[0]->sprite, main->pnj[0]->pos);
    }
    if (s == 2) {
        for (int i = 1; i <= 3; i++) {
            main->pnj[i]->pos.x = main->pnj[i]->pos.x - 4;
            sfSprite_setPosition(main->pnj[i]->sprite, main->pnj[i]->pos);
        }
    }
    if (s == 3) {
        main->enemies[3]->pos.x = main->enemies[3]->pos.x - 4;
        sfSprite_setPosition(main->enemies[3]->sprite, main->enemies[3]->pos);
    }
}

void up_pressed(main_t *main, int s)
{
    main->hero->rect.top = 30;
    clock_for_rect(main);
    main->map[s - 1]->pos.y = main->map[s - 1]->pos.y + 4;
    sfSprite_setPosition(main->map[s - 1]->sprite, main->map[s - 1]->pos);
    if (s == 1) {
        main->pnj[0]->pos.y = main->pnj[0]->pos.y + 4;
        sfSprite_setPosition(main->pnj[0]->sprite, main->pnj[0]->pos);
    }
    if (s == 2) {
        for (int i = 1; i <= 3; i++) {
            main->pnj[i]->pos.y = main->pnj[i]->pos.y + 4;
            sfSprite_setPosition(main->pnj[i]->sprite, main->pnj[i]->pos);
        }
    }
    if (s == 3) {
        main->enemies[3]->pos.y = main->enemies[3]->pos.y + 4;
        sfSprite_setPosition(main->enemies[3]->sprite, main->enemies[3]->pos);
    }
}

void down_pressed(main_t *main, int s)
{
    main->hero->rect.top = 0;
    clock_for_rect(main);
    main->map[s - 1]->pos.y = main->map[s - 1]->pos.y - 4;
    sfSprite_setPosition(main->map[s - 1]->sprite, main->map[s - 1]->pos);
    if (s == 1) {
        main->pnj[0]->pos.y = main->pnj[0]->pos.y - 4;
        sfSprite_setPosition(main->pnj[0]->sprite, main->pnj[0]->pos);
    }
    if (s == 2) {
        for (int i = 1; i <= 3; i++) {
            main->pnj[i]->pos.y = main->pnj[i]->pos.y - 4;
            sfSprite_setPosition(main->pnj[i]->sprite, main->pnj[i]->pos);
        }
    }
    if (s == 3) {
        main->enemies[3]->pos.y = main->enemies[3]->pos.y - 4;
        sfSprite_setPosition(main->enemies[3]->sprite, main->enemies[3]->pos);
    }
}

void left_pressed(main_t *main, int s)
{
    main->hero->rect.top = 59;
    clock_for_rect(main);
    main->map[s - 1]->pos.x = main->map[s - 1]->pos.x + 4;
    sfSprite_setPosition(main->map[s - 1]->sprite, main->map[s - 1]->pos);
    if (s == 1) {
        main->pnj[0]->pos.x = main->pnj[0]->pos.x + 4;
        sfSprite_setPosition(main->pnj[0]->sprite, main->pnj[0]->pos);
    }
    if (s == 2) {
        for (int i = 1; i <= 3; i++) {
            main->pnj[i]->pos.x = main->pnj[i]->pos.x + 4;
            sfSprite_setPosition(main->pnj[i]->sprite, main->pnj[i]->pos);
        }
    }
    if (s == 3) {
        main->enemies[3]->pos.x = main->enemies[3]->pos.x + 4;
        sfSprite_setPosition(main->enemies[3]->sprite, main->enemies[3]->pos);
    }
}

void hero_inputs(main_t *main)
{
    sfBool up = sfKeyboard_isKeyPressed(sfKeyUp);
    sfBool right = sfKeyboard_isKeyPressed(sfKeyRight);
    sfBool down = sfKeyboard_isKeyPressed(sfKeyDown);
    sfBool left = sfKeyboard_isKeyPressed(sfKeyLeft);

    if (up == sfTrue)
        up_pressed(main, main->state);
    if (right == sfTrue)
        right_pressed(main, main->state);
    if (down == sfTrue)
        down_pressed(main, main->state);
    if (left == sfTrue)
        left_pressed(main, main->state);
}
