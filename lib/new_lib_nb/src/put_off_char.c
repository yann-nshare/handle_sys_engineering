/*
** EPITECH PROJECT, 2020
** put_off_char.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *put_of_char(char *str, const char c)
{
    for (register unsigned int x = 0; str[x] != '\0';) {
        if (str[x] == c) {
            str += x;
            str = decal_off_nb(str, 1);
            str -= x;
            continue;
        }
        ++x;
    }
    return (str);
}