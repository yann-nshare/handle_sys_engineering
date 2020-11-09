/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** nofnink
*/

#include "lib_my.h"

static int find_prime(int nb)
{
    int exit_exe = 0;

    for (register int tour = 2; tour < nb && exit_exe != 1; ++tour) {
        if (!(nb % tour))
            exit_exe = 1;
    }
    return (exit_exe);
}

static int find_it(int nb, int exit_exe)
{
    for (;1;) {
        exit_exe = find_prime(nb);
        if (!exit_exe)
            break;
        else {
            exit_exe = 0;
            ++nb;
        }
    }
    return (nb);
}

int my_find_prime_sup(int nb)
{
    int exit_exe = 0;

    if (nb <= 2)
        return (2);
    nb = find_it(nb, exit_exe);
    return (nb);
}