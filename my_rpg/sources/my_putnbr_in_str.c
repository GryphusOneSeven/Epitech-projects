/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-gael.edmond
** File description:
** my_putnbr_in_str
*/
#include "../includes/my_rpg.h"

char *clear_str(char *str, int size)
{
    int i = 0;

    while (i != size) {
        str[i] = '\0';
        i = i + 1;
    }
    return (str);
}

char *my_putnbr_in_str(int nb, char *stat)
{
    int p = 1;
    int i = 0;

    if (nb < 10) {
        stat[i] = nb + 48;
        return (stat);
    } else {
        while (p / nb < 2)
            p = p * 10;
        while (p > 1) {
            p = p / 10;
            stat[i] = (nb / p) + 48;
            i++;
            nb = nb % p;
        }
    }
    stat[i] = '\0';
    return (stat);
}
