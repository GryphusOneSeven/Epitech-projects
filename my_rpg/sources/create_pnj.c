/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_pnj.c
*/
#include "../includes/my_rpg.h"

pnj_t *create_pnj(char *filepath, int x, int y)
{
    sfVector2f scale = {2.4, 2.4};
    pnj_t *pnj = malloc(sizeof(pnj_t));
    pnj->sprite = sfSprite_create();
    pnj->texture = sfTexture_createFromFile(filepath, NULL);
    pnj->pos = (sfVector2f){x, y};
    pnj->rect = (sfIntRect){0, 0, 21, 37};

    sfSprite_setTexture(pnj->sprite, pnj->texture, sfTrue);
    sfSprite_setTextureRect(pnj->sprite, pnj->rect);
    sfSprite_setPosition(pnj->sprite, pnj->pos);
    sfSprite_setScale(pnj->sprite, scale);
    return (pnj);
}

pnj_t *create_pnj_cavern(char *filepath, int x, int y)
{
    sfVector2f scale = {2.4, 2.4};
    pnj_t *pnj = malloc(sizeof(pnj_t));
    pnj->sprite = sfSprite_create();
    pnj->texture = sfTexture_createFromFile(filepath, NULL);
    pnj->pos = (sfVector2f){x, y};
    pnj->rect = (sfIntRect){0, 37, 22, 75};

    sfSprite_setTexture(pnj->sprite, pnj->texture, sfTrue);
    sfSprite_setTextureRect(pnj->sprite, pnj->rect);
    sfSprite_setPosition(pnj->sprite, pnj->pos);
    sfSprite_setScale(pnj->sprite, scale);
    return (pnj);
}

pnj_t **create_all_pnj(void)
{
    char *s1 = "You should check out what's going on\n\tin the castle!";
    char *s2 = "If you want to go to the castle,\nask the guard over there.";
    char *s3 = "Are you man enough to fight\n\t this monster?";
    char *s4 = "Use the arrow keys to move and\n \tpress space start a fight";
    pnj_t **pnj = malloc(sizeof(pnj_t) * 3);

    pnj[0] = create_pnj_cavern("assets/sprites/pnj2.png", 1200, 325);
    pnj[1] = create_pnj("assets/sprites/pnj0.png", 1875, 475);
    pnj[2] = create_pnj("assets/sprites/pnj1.png", 1500, 320);
    pnj[3] = create_pnj_cavern("assets/sprites/pnj5.png", 730, 275);
    pnj[0]->text = create_text(s1, 450, 200);
    pnj[1]->text = create_text(s4, 450, 200);
    pnj[2]->text = create_text(s2, 450, 200);
    pnj[3]->text = create_text(s3, 450, 200);
    pnj[0]->zone = (sfFloatRect){-250, 140, 100, 100};
    pnj[2]->zone = (sfFloatRect){-550, 150, 100, 100};
    pnj[3]->zone = (sfFloatRect){200, 150, 100, 100};
    return pnj;
}
