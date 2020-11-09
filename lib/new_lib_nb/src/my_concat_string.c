/*
** EPITECH PROJECT, 2020
** my_concat_string.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *my_concat_string(char *restrict const bigind, char *restrict const end)
{
    char *new = (char *) malloc(sizeof(char) * \
        (my_strlen(bigind) + my_strlen(end) + 1));
    unsigned int trac_e = my_strlen(bigind);

    new = my_strcpy(new, bigind);
    for (register unsigned int x = 0; end[x] != '\0' ; ++x)
        new[trac_e++] = end[x];
    new[trac_e] = '\0';
    return (new);
}