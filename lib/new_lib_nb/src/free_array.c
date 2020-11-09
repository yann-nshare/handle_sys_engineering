/*
** EPITECH PROJECT, 2020
** free_array.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

void **free_array(void **array)
{
    for (register unsigned int x = 0; array[x] != NULL; ++x)
        free(array[x]);
    free(array);
    return (array);
}