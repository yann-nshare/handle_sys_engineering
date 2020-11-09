/*
** EPITECH PROJECT, 2020
** my_str_islower.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

int my_str_islower(char const *str)
{
    if (str == NULL)
        return (1);
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] >= 'a' && str[x] <= 'z')
            continue;
        return (0);
    }
    return (1);
}