/*
** EPITECH PROJECT, 2020
** my_putnbr_base.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

void my_putchar(char c);

static void do_the_print(int nbr, char const *base, int size)
{
    if (nbr < 0) {
        nbr = -1 * nbr;
        my_putchar('-');
    }
    if (nbr == 0)
        return;
    else {
        do_the_print(nbr / size, base, size);
    }
    my_putchar(base[nbr % size]);
}

int my_putnbr_base(int nbr, char const *base)
{
    if (base == NULL)
        return (nbr);
    do_the_print(nbr, base, my_strlen(base));
    return (0);
}