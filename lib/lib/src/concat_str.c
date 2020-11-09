/*
** EPITECH PROJECT, 2020
** concat_str.c
** File description:
** Mkergall
*/

#include "lib_my.h"

unsigned int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *concat_char(const char *s1, char c, bool change_order)
{
    char *add = NULL;
    unsigned int size1 = my_strlen(s1);

    if (s1 == NULL)
        return (NULL);
    add = (char *) malloc(sizeof(char) * (size1 + 2));
    if (change_order == false) {
        add = my_strcpy(add, s1);
        add[size1] = c;
        add[size1 + 1] = '\0';
    } else {
        add[0] = c;
        for (register int x = 0; s1[x] != '\0'; x++)
            add[x + 1] = s1[x];
        add[size1 + 1] = '\0';
    }
    return (add);
}

char *concat_str(const char *s1, const char *s2)
{
    unsigned int trac_s1 = my_strlen(s1);
    char *add = NULL;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    add = (char *) malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
    add = my_strcpy(add, s1);
    for (register unsigned int trac_s2 = 0; s2[trac_s2] != '\0'; ++trac_s2) {
        add[trac_s1] = s2[trac_s2];
        ++trac_s1;
    }
    add[trac_s1] = '\0';
    return (add);
}