/*
** EPITECH PROJECT, 2020
** put_char_fist_char_in_str.c
** File description:
** Mkergall
*/

#include "lib_nb.h"

char *put_char_fist_char_in_str(char *restrict str, const char c)
{
    for (register unsigned int x = 0; str[x] != '\0'; ++x) {
        if (str[x] == c) {
            str[x] = '\0';
            return (str);
        }
    }
    return (str);
}