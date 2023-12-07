/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** compare n char in string
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i != n) {
        if (s1[i] != s2[i]) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
