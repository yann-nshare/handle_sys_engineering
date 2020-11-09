/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** nofnink
*/

#include "lib_my.h"

void my_putchar(char c);

int my_putstr(char const *str)
{
    if (str == NULL)
        return (84);
    for (register unsigned int x = 0; str[x] != '\0'; ++x)
        my_putchar(str[x]);
    return (0);
}