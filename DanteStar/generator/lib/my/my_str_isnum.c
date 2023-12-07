/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** Str Is Num
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i += 1;
        else
            return (1);
    }
    return (0);
}
