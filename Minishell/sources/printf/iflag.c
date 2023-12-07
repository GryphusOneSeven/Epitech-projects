/*
** EPITECH PROJECT, 2021
** iflag.c
** File description:
** i flag for printf
*/
#include "../../includes/my_printf.h"

int iflag(va_list *ap)
{
    int nb = va_arg(*ap, int);

    my_put_nbr(nb);
    return (0);
}
