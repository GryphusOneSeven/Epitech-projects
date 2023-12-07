/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** bgm_handling
*/
#include "../includes/my_rpg.h"

void bgm_handling(sfMusic **bgm, int i)
{
    if (i == -1) {
        for (int k = 0; k < 5; k++) {
            sfMusic_stop(bgm[k]);
        }
    }
    for (int j = 0; j < 6; j++) {
        if (j == i)
            j++;
        sfSoundStatus otherstat = sfMusic_getStatus(bgm[j]);
        if (otherstat == 2)
            sfMusic_stop(bgm[j]);
    }
    if (i != -1) {
        sfSoundStatus stat = sfMusic_getStatus(bgm[i]);
        if (stat == 0)
            sfMusic_play(bgm[i]);
    }
}
