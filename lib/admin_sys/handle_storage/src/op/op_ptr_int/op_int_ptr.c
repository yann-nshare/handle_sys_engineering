/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** op_set_element_ptr.c
*/

#include "storage.h"

void op_set_short_array(element_u *element, const short *data)
{
    element->arr_short_data = (short *)data;
}

void op_set_unsigned_short_array(element_u *element, const unsigned short *data)
{
    element->arr_unsigned_short_data = (unsigned short *)data;
}

void op_set_int_array(element_u *element, const int *data)
{
    element->arr_int_data = (int *)data;
}

void op_set_unsigned_int_array(element_u *element, const unsigned int *data)
{
    element->arr_unsigned_int_data = (unsigned int *)data;
}

void op_set_long_array(element_u *element, const long *data)
{
    element->arr_long_data = (long *)data;
}