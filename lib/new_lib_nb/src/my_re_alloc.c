/*
** EPITECH PROJECT, 2020
** my_re_alloc.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *my_re_alloc(char **str, const char *n_str)
{
    free(str[0]);
    if (n_str != NULL) {
        str[0] = malloc(sizeof(char *) * (my_strlen(n_str) + 1));
        my_strcpy(str[0], n_str);
    } else
        str[0] = NULL;
    return (str[0]);
}

char *my_realloc(char *ptr, int size)
{
    char *ptr_realloc;
    int	c = 0;

    if (ptr == NULL || size < 1)
        return (NULL);
    ptr_realloc = malloc(sizeof(char) * (size + 1));
    if (ptr_realloc == NULL)
        return (NULL);
    while (c != size && ptr[c] != '\0') {
        ptr_realloc[c] = ptr[c];
        c = c + 1;
    }
    if (ptr[c] == '\0')
        while (c < size)
            ptr_realloc[c++] = '\0';
    ptr_realloc[c] = '\0';
    free(ptr);
    return (ptr_realloc);
}