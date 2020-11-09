/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

char *my_strcat(char *dest, char const *src)
{
    int trac_dest;

    trac_dest = my_strlen(dest);
    for (int x = 0; src[x] != '\0'; x++) {
        dest[trac_dest] = src[x];
        trac_dest += 1;
    }
    dest[trac_dest] = '\0';
    return (dest);
}