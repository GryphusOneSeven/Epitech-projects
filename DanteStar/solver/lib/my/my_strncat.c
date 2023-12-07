/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** concatenates n characters of 2 strings
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int c = 0;

    while (dest[i] != '\0') {
        i = i + 1;
    }
    while (c != nb) {
        dest[i] = src[c];
        c = c + 1;
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
