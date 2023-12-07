/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** concatenates 2 strings
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int c = 0;

    while (dest[i] != '\0') {
        i = i + 1;
    }
    while (src[c] != '\0') {
        dest[i] = src[c];
        i = i + 1;
        c = c + 1;
    }
    dest[i] = '\0';
    return (dest);
}
