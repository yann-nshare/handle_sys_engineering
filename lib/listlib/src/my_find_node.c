/*
** EPITECH PROJECT, 2020
** MY FIND NODE
** File description:
** Finds the first reference into a node and returns it
*/

#include "listlib.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
int(*cmp)())
{
    for (linked_list_t *temp = (linked_list_t *)begin; temp; temp = temp->next)
        if (cmp(temp->data, data_ref) == 0)
            return (temp);
    return (void *)0;
}