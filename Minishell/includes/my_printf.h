/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** my_printf
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
    #include <stdarg.h>

typedef int (*pointeur_t)(va_list *ap);
void test_char(va_list *ap, char c);
void my_putchar(char c);
void my_putstr(char const *str);
int my_put_nbr(int nb);
int cflag(va_list *ap);
int sflag(va_list *ap);
int dflag(va_list *ap);
int iflag(va_list *ap);
int my_printf(const char *format, ...);

#endif
