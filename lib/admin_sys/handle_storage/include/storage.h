/*
** EPITECH PROJECT, 2020
** handle_sys_engineering
** File description:
** storage.h
*/

#if !defined(STORAGE_H)
#define STORAGE_H

#include <stdbool.h>

typedef enum element_type_e
{
    NUMBER_TYPE,
    DOUBLE_TYPE,
    STRING_TYPE,
    CHAR_TYPE,
    BOOL_TYPE,
    FUNC_TYPE,
    OBJECT_TYPE
} element_type_e;

typedef union element_u
{
    long long int nbr_data;
    double dbl_data;
    char *str_data;
    char char_data;
    bool bool_data;
    void (*func)();
    void *data;
} element_u;

typedef struct sys_t
{
    float key;
    char *tag;
    element_type_e index_type;
    element_u element;
} sys_t;

typedef struct system_t
{
    void **storage;
} system_t;

#endif // STORAGE_H
