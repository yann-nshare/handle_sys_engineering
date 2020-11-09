/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myprintf-yann.nshare
** File description:
** do_op.c
*/

#include "lib_nb.h"

int do_op(int a, int b, char op)
{
    char flag[] = {'+', '-', '/', '*', '%', 0};
    int (*tab[])() = {&add, &sub, &_div, &mul, &mod};
    int result = 0;

    for (int i = 0; flag[i]; i++)
        if (flag[i] == op) {
            result = (*tab[i])(a, b);
            if (result == 42)
                result = 62;
            return result;
        }
    return (0);
}