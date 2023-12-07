/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** char_isalpha
*/
#include "../includes/minishell.h"

int char_is_alpha(char c)
{
    if ((c < 'A' || c > 'Z') && (c > 'z' || c < 'a') && c != '_')
        return (1);
    return (0);
}
