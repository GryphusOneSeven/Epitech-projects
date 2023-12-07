/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** battle_function2
*/
#include "../includes/my_rpg.h"

void check_enemy_death(main_t *game, enemy_t *enemy, hero_t *hero)
{
    if (enemy->hp <= 0) {
        hero->level += 1;
        hero->atk += 2;
        hero->def += 1;
        hero->luck += 1;
        enemy->hp = 10;
        update_stat(game, hero);
        game->state = CAVERN;
    }
}

void attack_function(main_t *game)
{
    sfTime time;
    float seconds;

    time = sfClock_getElapsedTime(game->hero->cooldown);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.7) {
        game->enemies[game->rd]->hp -= game->hero->atk;
        check_enemy_death(game, game->enemies[game->rd], game->hero);
        sfClock_restart(game->hero->cooldown);
    }
}

int on_attack(main_t *game)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->wd->window);
    sfFloatRect pos_att = sfSprite_getGlobalBounds(game->button[4].sprite);
    sfFloatRect pos_run = sfSprite_getGlobalBounds(game->button[5].sprite);

    if (sfFloatRect_contains(&pos_att, mouse_pos.x, mouse_pos.y) && \
    sfMouse_isButtonPressed(sfMouseLeft)) {
        attack_function(game);
    }
    if (sfFloatRect_contains(&pos_run, mouse_pos.x, mouse_pos.y) && \
    sfMouse_isButtonPressed(sfMouseLeft))
        game->state = CAVERN;
    return 0;
}

void check_death(main_t *main)
{
    if (main->hero->hp <= 0)
        main->state = MENU;
}
