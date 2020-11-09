/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

char *my_strcpy(char *dest, char const *src)
{
    int x = 0;

    for (; src[x] != '\0'; x++)
        dest[x] = src[x];
    dest[x] = '\0';
    return (dest);
}