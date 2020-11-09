/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int trac = 0;

    for (trac = 0; s1[trac] == s2[trac]; trac++)
        if (s1[trac] == '\0')
            return (0);
    if (s1[trac] < s2[trac])
        return (-1);
    return (1);
}

int my_stracmp(char const *s1, char const *s2, \
unsigned int n, struct stracmp cmp)
{
    for (; n > 0; --n, ++cmp.ws1, ++cmp.ws2) {
        if (s1[cmp.ws1] != s2[cmp.ws2])
            return (s1[cmp.ws1] < s2[cmp.ws2] ? -1 : 1);
        else if (s1[cmp.ws1] == '\0' || s2[cmp.ws2] == '\0')
            return (0);
    }
    return (0);
}