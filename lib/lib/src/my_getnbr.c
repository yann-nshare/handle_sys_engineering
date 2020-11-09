/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** nofink
*/

#include "lib_my.h"

static int go_to_nb(char const *str, bool chose_ret)
{
    int tp[3] = {1, 0, 0};

    for (;
    str[tp[1]] != '\0' && (str[tp[1]] < '1' || str[tp[1]] > '9'); ++tp[1])
        if (str[tp[1]] == '-')
            tp[0] *= -1;
    if (chose_ret)
        return (tp[1]);
    return (tp[0]);
}

static int go_to_end(char const *str, int tp[3])
{
    for (register int trac = tp[1]; str[trac] != '\0'; ++trac) {
        if (str[trac] >= '0' && str[trac] <= '9')
            ++tp[2];
        else
            break;
    }
    return (tp[2]);
}

static int do_my_get_nbr(char const *str)
{
    int data[3] = {1, 0, 0};
    long int nb_ret = 0;

    data[0] = go_to_nb(str, false);
    data[1] = go_to_nb(str, true);
    data[2] = go_to_end(str, data);

    if (data[2] > 10)
        return (0);
    for (register int nb = 0;
        str[data[1]] != '\0' &&  nb != data[2]; ++nb) {
            nb_ret *= 10;
            nb_ret += str[data[1]] - 48;
            ++data[1];
        }
    if (nb_ret > 2147483647 || nb_ret < -2147483648)
        return (0);
    return ((int) nb_ret * data[0]);
}

int my_getnbr(char const *str)
{
    if (str == NULL)
        return (0);
    return (do_my_get_nbr(str));
}