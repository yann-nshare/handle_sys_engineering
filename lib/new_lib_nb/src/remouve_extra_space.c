/*
** EPITECH PROJECT, 2020
** remouve_extra_space.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *rm_extra_space(char *str)
{
    for (register unsigned int x = 0; str[x] != '\0';) {
        if (str[x] == ' ' && str[x + 1] == ' ') {
            str += x;
            str = decal_off_nb(str, 1);
            str -= x;
            continue;
        }
        ++x;
    }
    return (str);
}