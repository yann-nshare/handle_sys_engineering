/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

int my_strncmp(char const *s1, char const *s2, int n);

static char *com_str(char *str, const char *to_find, int trac_str)
{
    bool stop = false;

    for (;*str != '\0'; str++) {
        if (my_strncmp(str, to_find, trac_str) == false) {
            stop = true;
            break;
        }
    }
    if (stop == true)
        return (str);
    return (NULL);
}

char *my_strstr(char *str, char const *to_find)
{
    int trac_str = my_strlen(to_find);

    return (com_str(str, to_find, trac_str));
}