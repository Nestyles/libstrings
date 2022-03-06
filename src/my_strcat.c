/*
** EPITECH PROJECT, 2022
** src/strcat
** File description:
** strcat rewritten :)
*/

#include "my_strings.h"

char *my_strcat(char *dest, char const *src)
{
    size_t len = my_strlen(dest);

    for (size_t i = 0; src[i] != '\0'; ++i) {
        dest[len++] = src[i];
    }
    dest[len] = '\0';
    return dest;
}
