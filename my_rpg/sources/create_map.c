/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_map
*/
#include "../includes/my_rpg.h"

map_t *create_map(char *filepath, int x, int y)
{
    sfVector2f s = {3,2};
    map_t *map = malloc(sizeof(map_t));
    map->sprite = sfSprite_create();
    map->texture = sfTexture_createFromFile(filepath, NULL);
    map->pos = (sfVector2f){350, 200};
    map->exit = (sfFloatRect){x, y, 180, 130};

    sfSprite_setTexture(map->sprite, map->texture, sfTrue);
    sfSprite_setScale(map->sprite, s);
    sfSprite_setPosition(map->sprite, map->pos);
    return (map);
}

map_t *create_castle(char *filepath)
{
    sfVector2f s = {3,2};
    map_t *map = malloc(sizeof(map_t));
    map->sprite = sfSprite_create();
    map->texture = sfTexture_createFromFile(filepath, NULL);
    map->pos = (sfVector2f){-3890, -160};
    map->exit = (sfFloatRect){-2030, -2600, 750, 130};

    sfSprite_setTexture(map->sprite, map->texture, sfTrue);
    sfSprite_setScale(map->sprite, s);
    sfSprite_setPosition(map->sprite, map->pos);
    return (map);
}

map_t **create_all_maps(void)
{
    map_t **map = malloc(sizeof(map_t) * 4);

    map[0] = create_map("assets/map/in_cavern.png", 400, -560);
    map[1] = create_map("assets/map/in_village.png", -1035, -40);
    map[2] = create_castle("assets/map/in_castle.png");
    map[3] = NULL;

    return (map);
}
