/*
** EPITECH PROJECT, 2020
** rm_char_in_str.c
** File description:
** Mkergall remouve_the_nbr_of_char_ask_where_we_want
*/

#include "lib_nb.h"

char *rm_char_in_str(char *restrict const str,
unsigned int how, unsigned int were)
{
    unsigned int cont_malloc = my_strlen(str) - how;
    char *new_str = malloc(sizeof(char ) * (cont_malloc + 1));
    unsigned int trac_n = 0;
    unsigned int trac_str = 0;

    if (how + were > my_strlen(str) || were >= my_strlen(str))
        return (NULL);
    for (;were != trac_str; ++trac_str) {
        new_str[trac_n] = str[trac_str];
        ++trac_n;
    }
    trac_str = were + how;
    for (; str[trac_str] != '\0'; ++trac_str) {
        new_str[trac_n] = str[trac_str];
        ++trac_n;
    }
    new_str[trac_n] = '\0';
    return (new_str);
}