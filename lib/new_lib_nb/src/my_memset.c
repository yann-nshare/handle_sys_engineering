/*
** EPITECH PROJECT, 2020
** my_memset.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *my_memset(char *str, const char c, const unsigned int len)
{
    for (register unsigned x = 0; x != len; x++)
        str[x] = c;
    str[len] = '\0';
    return (str);
}