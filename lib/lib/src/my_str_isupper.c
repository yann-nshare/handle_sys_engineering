/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

int my_str_isupper(char const *str)
{
    if (str == NULL)
        return (1);
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] >= 'A' && str[x] <= 'Z')
            continue;
        return (0);
    }
    return (1);
}