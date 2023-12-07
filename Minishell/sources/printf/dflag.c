/*
** EPITECH PROJECT, 2021
** dflag.c
** File description:
** d flag for printf
*/
#include "../../includes/my_printf.h"

int dflag(va_list *ap)
{
    int nb = va_arg(*ap, int);

    my_put_nbr(nb);
    return (0);
}
