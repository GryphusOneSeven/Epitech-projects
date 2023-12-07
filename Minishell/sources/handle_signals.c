/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** handle_signals
*/
#include "../includes/minishell.h"

void signals(int s)
{
    if (WIFSIGNALED(s) && WTERMSIG(s) == SIGSEGV && !WCOREDUMP(s))
        my_puterr("Segmentation fault\n");
    if (WIFSIGNALED(s) && WTERMSIG(s) == SIGSEGV && WCOREDUMP(s))
        my_puterr("Segmentation fault (core dumped)\n");
    if (WIFSIGNALED(s) && WTERMSIG(s) == SIGFPE && !WCOREDUMP(s))
        my_puterr("Floating exception\n");
    if (WIFSIGNALED(s) && WTERMSIG(s) == SIGFPE && WCOREDUMP(s))
        my_puterr("Floating exception (core dumped)\n");
    if (WIFSIGNALED(s) && WTERMSIG(s) == SIGBUS && !WCOREDUMP(s))
        my_puterr("Bus error\n");
    if (WIFSIGNALED(s) && WTERMSIG(s) == SIGBUS && WCOREDUMP(s))
        my_puterr("Bus error (core dumped)\n");
    if (WIFSIGNALED(s) && WTERMSIG(s) == SIGABRT && !WCOREDUMP(s))
        my_puterr("Abort\n");
    if (WIFSIGNALED(s) && WTERMSIG(s) == SIGABRT && WCOREDUMP(s))
        my_puterr("Abort (core dumped)\n");
}
