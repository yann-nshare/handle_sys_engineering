/*
** EPITECH PROJECT, 2020
** MY REV LIST
** File description:
** Reverse the order of a chained list
*/

#include "listlib.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *list = *begin;
    linked_list_t *prev = 0;
    linked_list_t *next = 0;

    for (list = *begin; list->next; ) {
        next = list->next;
        list->next = prev;
        prev = list;
        list = next;
    }
    list->next = prev;
    *begin = list;
}