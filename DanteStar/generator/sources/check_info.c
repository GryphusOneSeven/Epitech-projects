/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** check_info
*/
#include "../includes/generator.h"
#include "../includes/my.h"

void print_single_column(generator_t *info)
{
    int i = 0;

    while (i != info->x) {
        printf("*");
        i++;
    }
}

int check_info(generator_t *info, char **av, int ac)
{
    if (info->x == 0 || info->y == 0)
        return (1);
    if (info->x == 1 && info->y == 1) {
        printf("*");
        return (1);
    }
    if (info->x > 1 && info->y == 1) {
        print_single_column(info);
        return (1);
    }
    if (ac == 4 && my_strncmp(av[3], "perfect", 7) == 0)
        info->perfect = 1;
    return (0);
}
