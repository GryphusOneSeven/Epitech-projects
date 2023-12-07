/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** Copy string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i <= n) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
