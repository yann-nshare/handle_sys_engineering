/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

char *my_strlowcase(char *str)
{
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] >= 65 && str[x] <= 90)
            str[x] = str[x] + 32;
    }
    return (str);
}