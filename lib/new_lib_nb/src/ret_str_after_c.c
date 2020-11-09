/*
** EPITECH PROJECT, 2020
** ret_str_after_c.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *ret_last_str_after_c(const char *restrict const str, const char c)
{
    unsigned int go_to_last = 0;
    char *n_str;
    register unsigned int trac_n = 0;

    for (unsigned int x = 0; str[x] != '\0'; ++x)
        if (str[x] == c)
            go_to_last = x;
    ++go_to_last;
    n_str = (char *) malloc(sizeof(char) * (my_strlen(str) - go_to_last + 1));
    for (; str[go_to_last] != '\0'; ++go_to_last)
        n_str[trac_n++] = str[go_to_last];
    n_str[trac_n] = '\0';
    return (n_str);
}