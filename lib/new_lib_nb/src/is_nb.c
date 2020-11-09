/*
** EPITECH PROJECT, 2020
** is_nb.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

bool is_nb(char *restrict const str)
{
    register unsigned int x = 0;

    if (str[0] == '-')
        ++x;
    for (; str[x] != '\0'; ++x) {
        if ((str[x] > '9' || str[x] < '0') && str[x] != '\n')
            return (false);
    }
    return (true);
}

bool is_float(char *restrict const str)
{
    char point = 0;
    char moin = 0;

    if (str[0] == '\0')
        return (true);
    if (str[0] == '.' || (str[0] == '-' && str[1] == '.'))
        return (false);
    for (register unsigned int x = 0; str[x] != '\0'; ++x) {
        if ((!IS_NB(str[x]) && str[x] != '-' && str[x] != '.') ||
        moin == 2 || point == 2 || (str[x] == '-' && x != 0))
            return (false);
        if (str[x] == '.')
            ++point;
        if (str[x] == '-')
            ++moin;
    }
    if (str[my_strlen(str) - 1] == '.' || str[my_strlen(str) - 1] == '-')
        return (false);
    return (true);
}

static void is_float_error_conditon(char *restrict const str, \
signed char *point, signed char *moin, register unsigned int x)
{
    if (str[x] == '.')
        ++point[0];
    if (str[x] == '-')
        ++moin[0];
}

signed char is_float_error_message(char *restrict const str)
{
    signed char point = 0;
    signed char moin = 0;

    if (str[0] == '\0')
        return (-1);
    if (str[0] == '.' || (str[0] == '-' && str[1] == '.'))
        return (-2);
    for (register unsigned int x = 0; str[x] != '\0'; ++x) {
        if ((!IS_NB(str[x]) && str[x] != '-' && str[x] != '.'))
            return (-3);
        if (moin == 2 || (str[x] == '-' && x != 0))
            return (-5);
        if (point == 2)
            return (-4);
        is_float_error_conditon(str, &point, &moin, x);
    }
    if (str[my_strlen(str) - 1] == '.' || str[my_strlen(str) - 1] == '-')
        return (-2);
    return (0);
}