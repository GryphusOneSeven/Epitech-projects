/*
** EPITECH PROJECT, 2021
** test_char.c
** File description:
** test the flag's char
*/
#include "../../includes/my_printf.h"

void test_char(va_list *ap, char c)
{
    char tab[] = {'c', 's', 'd', 'i', '\0'};
    pointeur_t point[] = {&cflag, &sflag, &dflag, &iflag};

    for (int i = 0; tab[i] != '\0'; i++) {
        if (tab[i] == c) {
            point[i](ap);
        }
    }
}
