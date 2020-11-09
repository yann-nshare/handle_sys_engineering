/*
** EPITECH PROJECT, 2020
** ret_str_how_where.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *ret_str_how_where
(const char *restrict str, unsigned int how, unsigned int were)
{
    char *n_str;
    register unsigned int trac_str = were;
    unsigned int size = 0;

    if (were > my_strlen(str))
        return (NULL);
    n_str = (char *) malloc(sizeof(char) * (how + 1));
    for (register unsigned int x = 0; x != how; ++x) {
        if (str[trac_str] == '\0')
            break;
        n_str[size++] = str[trac_str++];
    }
    n_str[size] = '\0';
    return (n_str);
}