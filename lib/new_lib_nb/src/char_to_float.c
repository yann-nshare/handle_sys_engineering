/*
** EPITECH PROJECT, 2020
** char_to_float.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

unsigned int cont_char(const char *restrict const str, char c)
{
    unsigned int cont = 0;

    for (register unsigned int x = 0 ; str[x] != '\0'; ++x) {
        if (str[x] == c)
            ++cont;
    }
    return (cont);
}

static float nb_to_float(char *restrict const str, float nb)
{
    unsigned int trac = 0;

    for (; str[trac] != '\0' && str[trac] != '.'; ++trac);
    ++trac;
    for (float tmp = 0.1; str[trac] != '\0'; ++trac) {
        nb = (str[trac] - '0') * tmp + nb;
        tmp *= 0.1;
    }
    return (nb);
}

float char_to_float(char *str)
{
    float nb = 0;
    bool neg = false;

    if (str[0] == '-') {
        ++str;
        neg = true;
    }
    nb = my_getnbr(str);
    if (cont_char(str, '.'))
        nb = nb_to_float(str, nb);
    if (neg)
        return (nb * -1);
    return (nb);
}