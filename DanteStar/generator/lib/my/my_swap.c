/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** swap *a and *b
*/

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
