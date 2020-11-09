/*
** EPITECH PROJECT, 2020
** MY PARAMS TO LIST
** File description:
** Put parameters into a chained list
*/

#include <stdlib.h>
#include "listlib.h"

linked_list_t *my_tab_array_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;

    for (int i = 0; i <= (ac - 1); i++)
        my_add_data_to_list(&list, av[i]);
    return list;
}
