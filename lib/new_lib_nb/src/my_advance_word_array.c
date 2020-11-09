/*
** EPITECH PROJECT, 2020
** my_advance_word_array.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

static char **malloc_world_array(char *restrict const str, char **array, \
const char c)
{
    unsigned int cont_malloc = 0;
    unsigned int trac_array = 0;

    for (register unsigned int x = 0; str[x] != '\0'; ++x) {
        if (str[x] != c) {
            ++cont_malloc;
            continue;
        }
        array[trac_array] = malloc(sizeof(char) * (cont_malloc + 1));
        cont_malloc = 0;
        ++trac_array;
    }
    array[trac_array] = malloc(sizeof(char) * (cont_malloc + 1));
    return (array);
}

static char **rite_world_array(char *restrict const str, char **array, \
const char c)
{
    unsigned int trac_x = 0;
    unsigned int trac_y = 0;

    for (register unsigned int x = 0; str[x] != '\0'; ++x) {
        if (str[x] == c) {
            array[trac_y][trac_x] = '\0';
            trac_x = 0;
            ++trac_y;
            continue;
        }
        array[trac_y][trac_x] = str[x];
        ++trac_x;
    }
    array[trac_y][trac_x] = '\0';
    return (array);
}

char **my_advance_word_array(char *restrict const str, const char c)
{
    unsigned int cont_malloc = cont_char(str, c) + 1;
    char **array = (char **) malloc(sizeof(char *) * (cont_malloc + 1));

    if (array == NULL)
        return (NULL);
    array[cont_malloc] = NULL;
    array = malloc_world_array(str, array, c);
    array = rite_world_array(str, array, c);
    return (array);
}
