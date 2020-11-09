/*
** EPITECH PROJECT, 2020
** MY LIST SIZE
** File description:
** Returns the size of a list
*/

#include <stdlib.h>
#include "listlib.h"

int my_list_size(linked_list_t const *begin)
{
    int size = 1;

    if (!begin)
        return 0;
    for (linked_list_t const *current_list = begin;
    current_list->next != NULL; size++)
        current_list = current_list->next;
    return (size);
}
