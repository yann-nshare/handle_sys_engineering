/*
** EPITECH PROJECT, 2020
** handle_sys_engineering
** File description:
** storage.h
*/

// #include "op.h"
#ifndef STORAGE_H
#define STORAGE_H

#include <stdbool.h>
#include <stdlib.h>

// #ifndef _OP_H_
// #include "op.h"
// #endif

#define OCT(t) sizeof(t)


#define ALLOC(element, type, size) element = malloc(OCT(type) * (size));


//exemple : value is a variable from allocetion, type it's type for allocation, size length of allocation
#define MY_MALLOC(variable, type, size) variable = ALLOC(type, size);

typedef enum element_type_e
{
    BOOL_TYPE,
    CHAR_TYPE,
    UNSIGNED_CHAR_TYPE,
    SHORT_TYPE,
    UNSIGNED_SHORT_TYPE,
    INT_type,
    UNSIGNED_INT_TYPE,
    LONG_TYPE,
    UNSIGNED_LONG_TYPE,
    LONG_LONG_TYPE,
    UNSIGNED_LONG_LONG_TYPE,
    DOUBLE_TYPE,


    BOOL_PTR_TYPE,
    CHAR_PTR_TYPE,
    UNSIGNED_CHAR_PTR_TYPE,
    SHORT_PTR_TYPE,
    UNSIGNED_SHORT_PTR_TYPE,
    INT_PTR_TYPE,
    UNSIGNED_INT_PTR_TYPE,
    LONG_PTR_TYPE,
    UNSIGNED_LONG_PTR_TYPE,
    LONG_LONG_PTR_TYPE,
    UNSIGNED_LONG_LONG_PTR_TYPE,
    DOUBLE_PTR_TYPE,
    LONG_DOUBLE_PTR_TYPE,


    FUNC_TYPE,
    OBJ_TYPE,
} element_type_e;

typedef union element_u
{
    bool bool_data;
    char char_data;
    unsigned char unsigned_char_data;
    short short_data;
    unsigned short unsigned_short_data;
    int int_data;
    unsigned int unsigned_int_data;
    long long_data;
    unsigned long unsigned_long_data;
    long long long_long_data;
    unsigned long long unsigned_long_long_data;
    double double_data;


    bool *arr_bool_data;
    char *arr_char_data;
    unsigned char *arr_unsigned_char_data;
    short *arr_short_data;
    unsigned short *arr_unsigned_short_data;
    int *arr_int_data;
    unsigned int *arr_unsigned_int_data;
    long *arr_long_data;
    unsigned long *arr_unsigned_long_data;
    long long *arr_long_long_data;
    unsigned long long *arr_unsigned_long_long_data;
    double *arr_double_data;
    long double *arr_long_double_data;


    void (*func)();
    void *obj;
} element_u;

typedef struct obj_t
{
    const char *tag;
    element_u element;
    element_type_e index_type;
    float key;
} obj_t;

typedef struct system_t
{
    void **storage;
} system_t;

void op_set_bool(element_u *element, const bool *data);
void op_set_char(element_u *element, const char *data);
void op_set_unsigned_char(element_u *element, const unsigned char *data);
void op_set_short(element_u *element, const short *data);
void op_set_unsigned_short(element_u *element, const unsigned short *data);
void op_set_int(element_u *element, const int *data);
void op_set_unsigned_int(element_u *element, const unsigned int *data);
void op_set_long(element_u *element, const long *data);
void op_set_unsigned_long(element_u *element, const unsigned long *data);
void op_set_long_long(element_u *element, const long long *data);
void op_set_unsigned_long_long\
(element_u *element, const unsigned long long *data);
void op_set_double(element_u *element, const double *data);


void op_set_bool_array(element_u *element, const bool *data);
void op_set_char_array(element_u *element, const char *data);
void op_set_unsigned_char_array(element_u *element, const unsigned char *data);
void op_set_short_array(element_u *element, const short *data);
void op_set_unsigned_short_array\
(element_u *element, const unsigned short *data);
void op_set_int_array(element_u *element, const int *data);
void op_set_unsigned_int_array(element_u *element, const unsigned int *data);
void op_set_long_array(element_u *element, const long *data);
void op_set_unsigned_long_array(element_u *element, const unsigned long *data);
void op_set_long_long_array(element_u *element, const long long *data);
void op_set_unsigned_long_long_array\
(element_u *element, const unsigned long long *data);
void op_set_double_array(element_u *element, const double *data);
void op_set_long_double_array(element_u *element, const long double *data);


void op_set_obj(element_u *element, const obj_t *data);
void op_set_func(element_u *element, void (*data)());

static void (*op_func[])() = {
    op_set_bool,
    op_set_char,
    op_set_unsigned_char,
    op_set_short,
    op_set_unsigned_short,
    op_set_int,
    op_set_unsigned_int,
    op_set_long,
    op_set_unsigned_long,
    op_set_long_long,
    op_set_unsigned_long_long,
    op_set_double,
    op_set_bool_array,
    op_set_char_array,
    op_set_unsigned_char_array,
    op_set_short_array,
    op_set_unsigned_short_array,
    op_set_int_array,
    op_set_unsigned_int_array,
    op_set_long_array,
    op_set_unsigned_long_array,
    op_set_long_long_array,
    op_set_unsigned_long_long_array,
    op_set_double_array,
    op_set_long_double_array,
    op_set_obj,
    op_set_func
};

// (*op_func[])();

void create_sys\
(system_t *system, unsigned short size, size_t octal, bool objet_buff);
void set_entity_system_from_pos(system_t *system, void *buff, const size_t pos);

void set_buff(void *element, void *buffer, void (*func)());

void set_element(element_u *element, void *data, element_type_e index_type);

#endif // STORAGE_H
