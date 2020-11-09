/*
** EPITECH PROJECT, 2020
** my_getnbr_base.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

static char *go_to_nb(char *str, char const *base)
{
    register int x = 0;

    base = base;
    for (; str[x] == '+' || str[x] == '-'; ++x);
    if (x != 0 && str[x - 1] == '-')
        str = &str[x - 1];
    else
        str = &str[x];
    return (str);
}

int do_the_getnbr(char *str, char const *base, int nb)
{
    int poss = 1;
    int size = my_strlen(str) - 1;
    int tmp_nb;
    int add = 1;

    if (str[0] == '-') {
        poss = poss * -1;
        --size;
        str = &str[1];
    }
    for (;size >= 0; --size) {
        tmp_nb = 0;
        for (; str[size] != base[tmp_nb]; ++tmp_nb);
        nb = nb + tmp_nb * add;
        add = add * my_strlen(base);
    }
    return (nb * poss);
}

int my_getnbr_base(char *str, char const *base)
{
    if (str == NULL || base == NULL)
        return (0);
    str = go_to_nb(str, base);
    return (do_the_getnbr(str, base, 0));
}