/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** Capitalize first letter
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'z') {
            str[i + 1] = str[i + 1] - 32;
        }
        i = i + 1;
    }
    return (str);
}
