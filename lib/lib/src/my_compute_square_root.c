/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** nofnink
*/

#include "lib_my.h"

static int my_compute_error(int nb)
{
    if (nb <= 0 || nb > 2147483647)
        return (0);
    if (nb == 1)
        return (1);
    return (12);
}

static int do_the_mutl(int nb)
{
    int tmp_nb = 0;

    for (register int x = 0; x < 32767;) {
        tmp_nb = x * x;
        if (tmp_nb != nb)
            ++x;
        if (x > nb)
            break;
        if (tmp_nb == nb)
            return (x);
    }
    return (0);
}

int my_compute_square_root(int nb)
{
    int ret = 0;

    ret = my_compute_error(nb);
    if (ret != 12)
        return (ret);
    return (do_the_mutl(nb));
}