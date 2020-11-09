/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int x = 0;

    for (; src[x] != '\0' && x <= (n - 1); x += 1)
        dest[x] = src[x];
    if (n > x)
        dest[x] = '\0';
    return (dest);
}