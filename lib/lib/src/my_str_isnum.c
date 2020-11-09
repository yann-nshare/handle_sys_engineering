/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

int my_str_isnum(char const *str)
{
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] >= '0' && str[x] <= '9')
            continue;
        return (0);
    }
    return (1);
}