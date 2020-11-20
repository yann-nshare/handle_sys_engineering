/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** op.h
*/

#if !defined(OP_H)
#define OP_H

#ifndef _STORAGE_H_
#include "storage.h"
#endif

void op_set_bool(element_u element, const bool *data);
void op_set_char(element_u element, const char *data);
void op_set_unsigned_char(element_u element, const unsigned char *data);
void op_set_short(element_u element, const short *data);
void op_set_unsigned_short(element_u element, const unsigned short *data);
void op_set_int(element_u element, const int *data);
void op_set_unsigned_int(element_u element, const unsigned int *data);
void op_set_long(element_u element, const long *data);
void op_set_unsigned_long(element_u element, const unsigned long *data);
void op_set_long_long(element_u element, const long long *data);
void op_set_unsigned_long_long\
(element_u element, const unsigned long long *data);
void op_set_double(element_u element, const double *data);
void op_set_long_double(element_u element, const long double *data);


void op_set_bool_array(element_u element, const bool *data);
void op_set_char_array(element_u element, const char *data);
void op_set_unsigned_char_array(element_u element, const unsigned char *data);
void op_set_short_array(element_u element, const short *data);
void op_set_unsigned_short_array(element_u element, const unsigned short *data);
void op_set_int_array(element_u element, const int *data);
void op_set_unsigned_int_array(element_u element, const unsigned int *data);
void op_set_long_array(element_u element, const long *data);
void op_set_unsigned_long_array(element_u element, const unsigned long *data);
void op_set_long_long_array(element_u element, const long long *data);
void op_set_unsigned_long_long_array\
(element_u element, const unsigned long long *data);
void op_set_double_array(element_u element, const double *data);
void op_set_long_double_array(element_u element, const long double *data);


void op_set_obj(element_u element, const obj_t *data);
void op_set_func(element_u element, const void (*data)());

#endif // OP_H
