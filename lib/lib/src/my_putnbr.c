/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

void my_putchar(char c);

static void print_nb(int nb)
{
    int tmp_nb;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            tmp_nb = nb % 10;
            nb = (nb - tmp_nb) / 10;
            print_nb(nb);
            my_putchar(tmp_nb + 48);
        } else
            my_putchar(nb + 48);
    }
}

int my_putnbr(int nb)
{
    if (nb == -2147483648) {
        write(1, "-2", 2);
        my_putnbr(147483648);
        return (0);
    }
    print_nb(nb);
    return (0);
}