/*
** EPITECH PROJECT, 2022
** my_puterr.c
** File description:
** put on error output
*/
#include <unistd.h>

void my_puterrchar(char c)
{
    write(2, &c, 1);
}

void my_puterr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_puterrchar(str[i]);
        i = i + 1;
    }
}
