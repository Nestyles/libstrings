/*
** EPITECH PROJECT, 2022
** src/my_strlen
** File description:
** strlen rewritten :)
*/

#include "my_strings.h"

size_t my_strlen(char const *str)
{
    size_t size = 0;

    while (*str++ != '\0')
        ++size;
    return size;
}
