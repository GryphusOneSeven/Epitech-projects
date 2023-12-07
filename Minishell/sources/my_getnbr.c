/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** get the number
*/

int get(int nb, int i, char const *str)
{
    nb += str[i] - 48;
    if (str[i + 1] >= '0' && str[i + 1] <= '9') {
        nb = nb * 10;
    }
    return (nb);
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int i = 0;
    int n = 1;

    if (str[0] == '-')
        n = -1;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            nb = get(nb, i, str);
        i = i + 1;
    }
    return (nb * n);
}
