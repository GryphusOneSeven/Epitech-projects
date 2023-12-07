/*
** EPITECH PROJECT, 2021
** sflag.c
** File description:
** s flag for printf
*/
#include "../../includes/my_printf.h"

int sflag(va_list *ap)
{
    char *str = va_arg(*ap, char *);

    my_putstr(str);
    return (0);
}
