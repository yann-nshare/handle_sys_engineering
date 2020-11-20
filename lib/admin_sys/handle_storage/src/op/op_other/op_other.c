/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** op_other.c
*/

#include "storage.h"

void op_set_obj(element_u *element, const obj_t *data)
{
    element->obj = (obj_t *)data;
}

void op_set_func(element_u *element, void (*data)())
{
    element->func = data;
}