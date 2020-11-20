/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** op_int.c
*/

#include "storage.h"

void op_set_short(element_u *element, const short *data)
{
    element->short_data = data[0];
}

void op_set_unsigned_short(element_u *element, const unsigned short *data)
{
    element->unsigned_short_data = data[0];
}

void op_set_int(element_u *element, const int *data)
{
    element->int_data = data[0];
}

void op_set_unsigned_int(element_u *element, const unsigned int *data)
{
    element->unsigned_int_data = data[0];
}

void op_set_long(element_u *element, const long *data)
{
    element->long_data = data[0];
}