/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** Printf low cost
*/
#include "../../includes/my_printf.h"

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i = i + 1;
            test_char(&ap, format[i]);
        } else if (format[i] != '%')
            my_putchar(format[i]);
        i = i + 1;
    }
    va_end(ap);
    return (0);
}
