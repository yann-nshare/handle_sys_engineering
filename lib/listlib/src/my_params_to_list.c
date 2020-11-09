/*
** EPITECH PROJECT, 2020
** MY PARAMS TO LIST
** File description:
** Put parameters into a chained list
*/

#include <stdlib.h>
#include "listlib.h"

int add_arg_to_list(linked_list_t **list, char *arg)
{
    linked_list_t *cplist;

    cplist = malloc(1 * sizeof(*cplist));
    if (!cplist)
        return (1);
    cplist->data = arg;
    cplist->next = *list;
    *list = cplist;
    return (0);
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;

    for (int i = 0; i <= (ac - 1); i++)
        add_arg_to_list(&list, av[i]);
    return list;
}
