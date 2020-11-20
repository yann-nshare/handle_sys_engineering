/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** op_int_2.c
*/

#include "storage.h"

void op_set_unsigned_long(element_u *element, const unsigned long *data)
{
    element->unsigned_long_data = data[0];
}

void op_set_long_long(element_u *element, const long long *data)
{
    element->long_long_data = data[0];
}

void op_set_unsigned_long_long\
(element_u *element, const unsigned long long *data)
{
    element->unsigned_long_long_data = data[0];
}

void op_set_double(element_u *element, const double *data)
{
    element->double_data = data[0];
}
