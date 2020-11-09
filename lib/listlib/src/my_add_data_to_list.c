/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_tabarray_to_list.c
*/

#include <stdlib.h>
#include "listlib.h"

int my_add_data_to_list(linked_list_t **list, char *arg)
{
    linked_list_t *cplist;

    cplist = malloc(sizeof(*cplist) * 1);
    if (!cplist)
        return (1);
    cplist->data = arg;
    cplist->next = *list;
    *list = cplist;
    return (0);
}