/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** nofnink
*/

#include "lib_my.h"

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}