/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

char *my_strupcase(char *str)
{
    for (int x = 0; str[x] != '\0'; x += 1) {
        if (str[x] >= 97 && str[x] <= 122)
            str[x] = str[x] - 32;
    }
    return (str);
}