/*
** EPITECH PROJECT, 2022
** include/my_strings
** File description:
** my_strings library include :)
*/

#ifndef __MY_STRINGS_H__
    #define __MY_STRINGS_H__

typedef unsigned long size_t;

/**
** @brief Get the size of a string
** @param str null-terminated string
** @return Size of str
**/
size_t my_strlen(char const *str);

/**
** @brief Concatenate 2 strings
** @param dest buffer which will hold the result
** @param src string concatened into dest
** @return pointer to dest
*/
char *my_strcat(char *dest, char const *src);

#endif
