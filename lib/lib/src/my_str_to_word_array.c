/*
** EPITECH PROJECT, 2020
** my_str_to_word_array.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

static bool element_printable(char const *str, unsigned int trac_str)
{
    if ((str[trac_str] > '9' || str[trac_str] < '0') &&
    (str[trac_str] > 'z' || str[trac_str] < 'a') &&
    (str[trac_str] > 'Z' || str[trac_str] < 'A'))
        return (false);
    return (true);
}

static char **malloc_the_array(char const *str, \
char **new_array, int size)
{
    bool printable = false;

    for (register int trac_str = 0; str[trac_str] != '\0'; ++trac_str) {
        if (!element_printable(str, trac_str) && !printable)
            continue;
        printable = true;
        if (!element_printable(str, trac_str) &&
        element_printable(str, trac_str + 1))
            ++size;
    }
    new_array = (char **) malloc(sizeof(char **) * (size + 2));
    return (new_array);
}

static char **nb_of_array(char const *str, \
char **new_array, unsigned int y, unsigned int size)
{
    bool printable = false;

    new_array = malloc_the_array(str, new_array, size);
    for (register int trac_str = 0;1; ++trac_str) {
        if (!element_printable(str, trac_str) && !printable)
            continue;
        printable = true;
        if (element_printable(str, trac_str)) {
            ++size;
            continue;
        } else if (!element_printable(str, trac_str) &&
        !element_printable(str, trac_str + 1))
            continue;
        new_array[y] = (char *) malloc(sizeof(char) * (size + 1));
        ++y;
        if (str[trac_str] == '\0')
            break;
    }
    return (new_array);
}

static char **put_data_array(char const *str, \
char **new_array, unsigned int y, unsigned int x)
{
    bool printable = false;

    for (register int trac_str = 0; str[trac_str] != '\0'; ++trac_str) {
        if (!element_printable(str, trac_str) && !printable)
            continue;
        printable = true;
        if (element_printable(str, trac_str)) {
            new_array[y][x] = str[trac_str];
            ++x;
            continue;
        } else if (!element_printable(str, trac_str) &&
        !element_printable(str, trac_str + 1))
            continue;
        new_array[y][x] = '\0';
        ++y;
        x = 0;
    }
    new_array[y][x] = '\0';
    new_array[y + 1] = NULL;
    return (new_array);
}

char **my_str_to_word_array(char const *str)
{
    char **new_array = NULL;
    unsigned int cont_print = 0;

    if (str == NULL)
        return (NULL);
    for (register unsigned int x = 0 ; str[x] != '\0'; ++x)
        if (element_printable(str, x))
            ++cont_print;
    if (cont_print != 0)
        new_array = put_data_array
        (str, nb_of_array(str, new_array, 0,  0), 0, 0);
    else {
    new_array = malloc(sizeof(char *) * 1);
    new_array[0] = NULL;
    }
    return (new_array);
}