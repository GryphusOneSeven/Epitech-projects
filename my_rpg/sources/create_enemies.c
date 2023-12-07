/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_enemies
*/
#include "../includes/my_rpg.h"

text_t *create_enemy_stat(int hp)
{
    char *str = malloc(sizeof(char) * 10);

    clear_str(str, 10);
    text_t *stat = create_text(my_putnbr_in_str(hp, str), 600, 140);
    return (stat);
}

enemy_t *create_enemy(char *filepath)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    sfVector2f scale = {3, 3};
    enemy->sprite = sfSprite_create();
    enemy->texture = sfTexture_createFromFile(filepath, NULL);
    enemy->hp = 10;
    enemy->atk = 2;
    enemy->def = 1;
    enemy->xp_gain = 0;
    enemy->rect = (sfIntRect){0, 0, 63, 90};
    enemy->pos = (sfVector2f){550, 200};
    enemy->stat = create_enemy_stat(enemy->hp);

    sfSprite_setTexture(enemy->sprite, enemy->texture, sfTrue);
    sfSprite_setTextureRect(enemy->sprite, enemy->rect);
    sfSprite_setPosition(enemy->sprite, enemy->pos);
    sfSprite_setScale(enemy->sprite, scale);
    return (enemy);
}

enemy_t *create_enemy2(char *filepath)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    sfVector2f scale = {3, 3};
    enemy->sprite = sfSprite_create();
    enemy->texture = sfTexture_createFromFile(filepath, NULL);
    enemy->atk = 0;
    enemy->def = 0;
    enemy->xp_gain = 0;
    enemy->rect = (sfIntRect){0, 0, 275, 180};
    enemy->pos = (sfVector2f){-1850, 2000};

    sfSprite_setTexture(enemy->sprite, enemy->texture, sfTrue);
    sfSprite_setTextureRect(enemy->sprite, enemy->rect);
    sfSprite_setPosition(enemy->sprite, enemy->pos);
    sfSprite_setScale(enemy->sprite, scale);
    return (enemy);
}

enemy_t **create_all_enemies(void)
{
    enemy_t **enemies = malloc(sizeof(enemy_t) * 4);

    enemies[0] = create_enemy("assets/sprites/enemy_z.png");
    enemies[1] = create_enemy("assets/sprites/enemy_s.png");
    enemies[2] = create_enemy("assets/sprites/enemy_g.png");
    enemies[3] = create_enemy2("assets/sprites/boss.png");
    return (enemies);
}

void update_enemy(main_t *main)
{
    free(main->enemies[main->rd]->stat);
    main->enemies[main->rd]->stat = \
    create_enemy_stat(main->enemies[main->rd]->hp);
}
