/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** op_set_element_ptr.c
*/

#include "storage.h"

void op_set_bool_array(element_u *element, const bool *data)
{
    element->arr_bool_data = (bool *)data;
}

void op_set_char_array(element_u *element, const char *data)
{
    element->char_data = (char *)data;
}

void op_set_unsigned_char_array(element_u *element, const unsigned char *data)
{
    element->arr_unsigned_char_data = (unsigned char *)data;
}