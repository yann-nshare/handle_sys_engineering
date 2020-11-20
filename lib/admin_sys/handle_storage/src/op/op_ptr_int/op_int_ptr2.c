/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** op_int_ptr2.c
*/

#include "storage.h"

void op_set_unsigned_long_array(element_u *element, const unsigned long *data)
{
    element->arr_unsigned_long_data = (unsigned long *)data;
}

void op_set_long_long_array(element_u *element, const long long *data)
{
    element->arr_long_long_data = (long long *)data;
}

void op_set_unsigned_long_long_array\
(element_u *element, const unsigned long long *data)
{
    element->arr_unsigned_long_long_data = (unsigned long long *)data;
}

void op_set_double_array(element_u *element, const double *data)
{
    element->arr_double_data = (double *)data;
}

void op_set_long_double_array(element_u *element, const long double *data)
{
    element->arr_long_double_data = (long double *)data;
}