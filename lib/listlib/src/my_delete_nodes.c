/*
** EPITECH PROJECT, 2020
** MY DELETE NODES
** File description:
** Deletes a node if the data matches the data arg
*/

#include <stdlib.h>
#include "../../lib/include/lib_my.h"
#include "listlib.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int(*cmp)())
{
    linked_list_t *prev = NULL, *curr = *begin, *next = NULL;

    for (; curr != NULL; prev = curr, curr = next) {
        next = curr->next;
        if ((cmp)(data_ref, (char *)curr->data) == 0) {
            if (prev == NULL)
                *begin = next;
            else {
                prev->next = next;
            }
        }
    }
    return (0);
}
