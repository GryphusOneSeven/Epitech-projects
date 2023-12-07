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

void error_output(char *str, int i)
{
    my_puterr(str);
    if (i == 0)
        my_puterr(": Command not found.\n");
    if (i == 1)
        my_puterr(": Too many arguments.\n");
    if (i == 2)
        my_puterr(": Variable name must begin with a letter.\n");
    if (i == 3)
        my_puterr(": Variable name must contain alphanumeric characters.\n");
    if (i == 4)
        my_puterr(": Too few arguments.\n");
    if (i == 5)
        my_puterr(": Expression Syntax.\n");
    if (i == 6)
        my_puterr(": Badly formed number.\n");
    if (i == 7)
        my_puterr(": Permission denied.\n");
    if (i == 8)
        my_puterr(": No such file or directory.\n");
}

void error_output2(char *str, int i)
{
    my_puterr(str);
    if (i == 9)
        my_puterr(": Not a directory.\n");
}
