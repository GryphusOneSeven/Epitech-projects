/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
void my_puterrchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
char *my_strdup(char const *src);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strupcase(char *str);
void my_puterr(char *str);
void my_swap(int *a, int *b);

#endif
