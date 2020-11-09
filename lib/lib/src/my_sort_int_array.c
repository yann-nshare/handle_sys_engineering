/*
** EPITECH PROJECT, 2020
** my_sort_int_array.c
** File description:
** nofnink
*/

#include "lib_my.h"

static int *do_the_translation(int *array, int size, int nb_select, int x)
{
    int transform_next;
    int trac = 0;
    int passing_mode = 0;

    size = size;
    for (;trac != x + 1; trac += 1) {
        if ((array[trac] < nb_select) && passing_mode == 0)
            continue;
        passing_mode = 1;
        transform_next = array[trac];
        array[trac] = nb_select;
        nb_select = transform_next;
    }
    return (array);
}

void my_sort_int_array(int *array, int size)
{
    if (array == NULL || size <= 0)
        return;
    for (int x = 0; x != size - 1; x++) {
        if (array[x + 1] > array[x])
            continue;
        array = do_the_translation(array, size, array[x + 1], x + 1);
    }
}