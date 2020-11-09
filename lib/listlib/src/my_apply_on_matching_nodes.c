/*
** EPITECH PROJECT, 2020
** MY APPLY ON MATCHING NODES
** File description:
** Pointer to a function
*/

#include "listlib.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int(*f)(),
void const *data_ref, int (*cmp)())
{
    for (linked_list_t *temp = begin; temp; temp = temp->next) {
        if ((*cmp)(temp->data, data_ref) == 0)
            (*f)(temp->data);
    }
    return (0);
}