/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_hero
*/
#include "../includes/my_rpg.h"

hero_t *create_hero(char *filepath)
{
    sfVector2f scale = {2.4, 2.4};
    hero_t *hero = malloc(sizeof(hero_t));
    hero->sprite = sfSprite_create();
    hero->texture = sfTexture_createFromFile(filepath, NULL);
    hero->pos = (sfVector2f){615, 330};
    hero->rect = (sfIntRect){0, 0, 21, 29};
    hero->hp = 12;
    hero->atk = 3;
    hero->def = 1;
    hero->level = 1;
    hero->luck = 1;
    hero->xp = 0;
    hero->cooldown = sfClock_create();

    sfSprite_setTexture(hero->sprite, hero->texture, sfTrue);
    sfSprite_setTextureRect(hero->sprite, hero->rect);
    sfSprite_setPosition(hero->sprite, hero->pos);
    sfSprite_setScale(hero->sprite, scale);
    return (hero);
}
