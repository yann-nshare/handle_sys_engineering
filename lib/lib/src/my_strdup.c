/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

char *my_strndup(char *str, unsigned int n)
{
    char *new_str;
    char *tmp;

    if (str == NULL)
        return (NULL);
    tmp = my_strdup(str);
    new_str = (char *) malloc(sizeof(char) * (n + 1));
    tmp[n] = '\0';
    new_str = my_strcpy(new_str, tmp);
    free(tmp);
    return (new_str);
}

char *my_strdup(char const *src)
{
    char *new_str = NULL;

    if (src == NULL)
        return (NULL);
    new_str = (char *) malloc(sizeof(char) * (my_strlen(src) + 1));
    new_str = my_strcpy(new_str, src);
    return (new_str);
}