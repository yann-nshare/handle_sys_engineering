/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

static char *transform_the_str(char *str, int x)
{
    if (x != 0) {
        if ((str[x - 1] == ' ' ||
        str[x - 1] == '+' || str[x - 1] == '-')
        && (str[x] <= 'z' && str[x] >= 'a'))
            str[x] = str[x] - 32;
        if ((str[x - 1] != ' ' &&
        str[x - 1] != '+' && str[x - 1] != '-')
        && (str[x] <= 'Z' && str[x] >= 'A'))
            str[x] = str[x] + 32;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    if (str == NULL)
        return (str);
    for (int x = 0; str[x] != '\0'; x++) {
        if (x == 0 && (str[x] <= 'z' && str[x] >= 'a'))
            str[x] = str[x] - 32;
        str = transform_the_str(str, x);
    }
    return (str);
}