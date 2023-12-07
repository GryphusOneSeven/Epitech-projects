/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** put nbr
*/
#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int p = 1;
    int tmp = 0;

    while (nb / p > 9) {
        p = p * 10;
    }
    while (p > 0) {
        tmp = (nb / p) + 48;
        my_putchar(tmp);
        nb = nb % p;
        p = p / 10;
    }
    return (0);
}
