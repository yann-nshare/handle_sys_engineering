/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myprintf-yann.nshare
** File description:
** itoa.c
*/

#include "lib_nb.h"

int itoa(int value, char *ptr)
{
    int count = 0;
    int temp;

    if (!ptr)
        return (0);
    if (value == 0) {
        *ptr = '0';
        return 1;
    } if (value < 0) {
        value *= (-1);
        *ptr++ = '-';
        count++;
    } for (temp = value; temp > 0; temp /= 10, ptr++);
    *ptr = '\0';
    for (temp = value; temp > 0; temp /= 10) {
        *--ptr = temp % 10 + '0';
        count++;
    } return count;
}

char *itoa_to_str(int value)
{
    int count = 0;
    int temp;
    char *ptr = malloc(sizeof(char) * (value + 1));

    my_memset(ptr, '\0', value);
    if (!ptr) {
        free(ptr);
        return NULL;
    }
    if (value == 0) {
        free(ptr);
        return (my_strdup("0"));
    } if (value < 0) {
        value *= (-1);
        *ptr++ = '-';
        count++;
    } for (temp = value; temp > 0; temp /= 10, ptr++);
    *ptr = '\0';
    for (temp = value; temp > 0; temp /= 10)
        *--ptr = temp % 10 + '0';
    return ptr;
}