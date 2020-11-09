/*
** EPITECH PROJECT, 2020
** ret_beafore_last_char.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *ret_beafore_last_char(char *str, const char c)
{
    unsigned int go_to_last = 0;

    for (unsigned int x = 0; str[x] != '\0'; ++x)
        if (str[x] == c)
            go_to_last = x;
    if (go_to_last != 0)
        str[go_to_last] = '\0';
    return (str);
}