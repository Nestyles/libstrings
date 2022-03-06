/*
** EPITECH PROJECT, 2022
** src/my_strlen
** File description:
** strlen rewritten :)
*/

int my_strlen(char const *str)
{
    int size = 0;

    while (*str++ != '\0')
        ++size;
    return size;
}
