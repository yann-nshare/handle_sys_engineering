/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

char *my_revstr(char *str)
{
    char transi;

    for (int x = 0; x != (int)(my_strlen(str) / 2); x++) {
        transi = str[my_strlen(str) - x - 1];
        str[my_strlen(str) - x - 1] = str[x];
        str[x] = transi;
    }
    return (str);
}