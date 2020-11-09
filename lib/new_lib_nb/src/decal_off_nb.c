/*
** EPITECH PROJECT, 2020
** decal_off_nb.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *decal_off_nb(char *str, unsigned int nb)
{
    for (register unsigned int x = 0;1; ++x) {
        if (str[x + nb] == '\0') {
            str[x] = '\0';
            break;
        }
        str[x] = str[x + nb];
    }
    return (str);
}