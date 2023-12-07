/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** battle_function
*/
#include "../includes/my_rpg.h"

void activating_combat_mode(main_t *main)
{
    sfBool space = sfKeyboard_isKeyPressed(sfKeySpace);

    if (space == sfTrue)
        main->state = BATTLE;
}

void move_rect_enemy(main_t *main, int offset, int max_value, int i)
{
    main->enemies[i]->rect.left = main->enemies[i]->rect.left + offset;
    if (main->enemies[i]->rect.left >= max_value) {
        main->enemies[i]->rect.left = 0;
        main->hero->hp -= 1;
        update_stat(main, main->hero);
    }
    sfSprite_setTextureRect(main->enemies[i]->sprite, main->enemies[i]->rect);
}

void animate_enemy(main_t *main, int i)
{
    sfTime time;
    float seconds;

    time = sfClock_getElapsedTime(main->wd->clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.30) {
        move_rect_enemy(main, 57, 205, i);
        sfClock_restart(main->wd->clock);
    }
}

void battle_function(main_t *main)
{
    bgm_handling(main->bgm, 4);
    animate_enemy(main, main->rd);
    on_attack(main);
    check_death(main);
    update_enemy(main);
    sfRenderWindow_drawSprite(main->wd->window, main->bg[1]->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, \
    main->enemies[main->rd]->sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->button[3].sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->button[2].sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->button[4].sprite, NULL);
    sfRenderWindow_drawSprite(main->wd->window, main->button[5].sprite, NULL);
    sfRenderWindow_drawText(main->wd->window, \
    main->enemies[main->rd]->stat->text, NULL);
    draw_stats(main);
}
