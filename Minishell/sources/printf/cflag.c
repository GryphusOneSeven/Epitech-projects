/*
** EPITECH PROJECT, 2021
** cflag.c
** File description:
** c flag for printf
*/
#include "../../includes/my_printf.h"

int cflag(va_list *ap)
{
    char c = va_arg(*ap, int);

    my_putchar(c);
    return (0);
}
