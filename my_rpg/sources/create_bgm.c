/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_bgm
*/
#include "../includes/my_rpg.h"

sfMusic **create_all_bgm(void)
{
    sfMusic **bgm = malloc(sizeof(sfMusic *) * 7);
    bgm[0] = sfMusic_createFromFile("assets/bgm/menu.ogg");
    bgm[1] = sfMusic_createFromFile("assets/bgm/cavern.ogg");
    bgm[2] = sfMusic_createFromFile("assets/bgm/village.ogg");
    bgm[3] = sfMusic_createFromFile("assets/bgm/castle.ogg");
    bgm[4] = sfMusic_createFromFile("assets/bgm/battle.ogg");
    bgm[5] = sfMusic_createFromFile("assets/bgm/credits.ogg");
    bgm[6] = NULL;

    sfMusic_setLoop(bgm[1], sfTrue);
    sfMusic_setLoop(bgm[2], sfTrue);
    sfMusic_setLoop(bgm[3], sfTrue);
    sfMusic_setLoop(bgm[4], sfTrue);
    return (bgm);
}
