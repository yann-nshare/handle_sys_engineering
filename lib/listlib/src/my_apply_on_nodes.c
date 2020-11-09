/*
** EPITECH PROJECT, 2020
** MY APPLY ON NODES
** File description:
** Pointer to a function
*/

#include "listlib.h"

int my_apply_on_nodes(linked_list_t *begin, int(*f)(void *))
{
    for (linked_list_t *temp = begin; temp; temp = temp->next)
        (*f)(temp->data);
    return (0);
}