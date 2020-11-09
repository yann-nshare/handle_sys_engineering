/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** nofnink
*/

#include "lib_my.h"

int my_is_prime(int nb)
{
    if (nb <= 0 || nb == 1)
        return (0);
    for (int x = 2; x != nb; x += 1)
        if ((nb / x) * x == nb)
            return (0);
    return (1);
}