/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** object.h
*/

#if !defined(OBJECT_H)
#define OBJECT_H

#include "storage.h"

typedef enum
{
    FIRST,
    LAST
} get_part_e;


float create_key(float first, float last);
int take_id(get_part_e part, long double id);

obj_t *create_obj\
(const char *tag, void *data, element_type_e index_type, float key);
void set_element(element_u *element, void *data, element_type_e index_type);

#endif // OBJECT_H
