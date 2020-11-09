/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** nofink
*/

#include "lib_my.h"

void my_putchar(char c);

unsigned int my_strlen(const char *str)
{
    int x = 0;

    if (str == NULL)
        return (0);
    for (; str[x] != '\0'; x++);
    return (x);
}