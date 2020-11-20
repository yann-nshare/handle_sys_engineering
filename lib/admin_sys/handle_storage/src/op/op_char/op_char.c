/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** op_set_element->c
*/

#include "storage.h"

void op_set_bool(element_u *element, const bool *data)
{
    element->bool_data = data[0];
}

void op_set_char(element_u *element, const char *data)
{
    element->char_data = data[0];
}

void op_set_unsigned_char(element_u *element, const unsigned char *data)
{
    element->unsigned_char_data = data[0];
}
