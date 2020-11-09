/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

static int chose_how_ret(char const *s1, char const *s2, int trac)
{
    if (s1[trac] < s2[trac])
        return (-1);
    return (1);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (register int trac = 0; n > 0; trac++) {
        if (s1[trac] != s2[trac])
            return (chose_how_ret(s1, s2, trac));
        else if (s1[trac] == '\0')
            break;
        --n;
    }
    return (0);
}