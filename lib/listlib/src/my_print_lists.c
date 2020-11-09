/*
** EPITECH PROJECT, 2020
** B-CPE-100-PAR-1-3-cpoolday11-yann.nshare
** File description:
** my_print_lists.c
*/

#include "listlib.h"

void my_print_lists(linked_list_t *lists)
{
    for (; lists; lists = lists->next);
    return ;
}