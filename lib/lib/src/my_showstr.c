/*
** EPITECH PROJECT, 2020
** my_showstr.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

void my_putchar(char c);

int my_putnbr_base(int nbr, char const *base);

int my_showstr(char const *str)
{
    if (str == NULL)
        return (0);
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] >= ' ' && str[x] <= '~') {
            my_putchar(str[x]);
            continue;
        }
        my_putchar('\\');
        if (str[x] >= '\0' && str[x] <= 15)
            my_putchar('0');
        my_putnbr_base(str[x], "0123456789abcdef");
    }
    return (0);
}