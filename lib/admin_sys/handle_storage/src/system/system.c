/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-myhunter-yann.nshare
** File description:
** create_system.c
*/

#include "lib_my.h"
#include "object.h"
#include "storage.h"

int take_id(get_part_e part, long double id)
{
    int i;

    if (part == LAST) {
        i = (int) ((id - (long int)id) * 10000);
        if (i == 0)
            return (0);
        while (i % 10 == 0)
            i /= 10;
    }
    else if (part == FIRST)
        i = (int) id;
    else
        return (-1);
    return (i);
}

float create_key(float first, float last)
{
    return (first + (last / 10));
}

void create_sys\
(system_t *system, unsigned short size, size_t octal, bool objet_buff)
{
    if (!size)
        return;
    ALLOC(system->storage, *system->storage, size + 1)
    system->storage[size] = NULL;
    if (objet_buff)
        for (unsigned short i = 0; i < size; i++)
            system->storage[i] = create_obj(
                NULL, \
                NULL, \
                OBJ_TYPE, \
                create_key(i, 0)
                );
    else
        for (unsigned short i = 0; i < size; i++)
            ALLOC(system->storage[i], octal, 1)
}

void set_entity_system_from_pos(system_t *system, void *buff, const size_t pos)
{
    system->storage[pos] = buff;
}

// void set_buff(void *element, void *buffer, void (*func)())
// {
// }