/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** object.c
*/

#include "storage.h"

obj_t *create_obj\
(const char *tag, void *data, element_type_e index_type, float key)
{
    obj_t *obj;
    element_u element;

    ALLOC(obj, obj_t, 1)
    obj->tag = tag;
    obj->index_type = index_type;
    obj->key = key;
    set_element(&element, data, index_type);
    return obj;
}

void set_element(element_u *element, void *data, element_type_e index_type)
{
    (*op_func[index_type])(element, data);
}
