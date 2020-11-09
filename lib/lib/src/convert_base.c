/*
** EPITECH PROJECT, 2020
** convert_base.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

short how_long_nb(int nb)
{
    short how = 0;

    for (; nb != 0; nb /= 10)
        ++how;
    return (how);
}

static int *put_the_transfair(int *nb_tab, int nb, char const *base)
{
    unsigned int trac_nb_tab = 1;
    unsigned int nb_base = my_strlen(base);

    nb_tab[0] = nb;
    for (;nb != 0; ++trac_nb_tab) {
        nb /= nb_base;
        nb_tab[trac_nb_tab] = nb;
    }
    return (nb_tab);
}

char *transform_nb_tab(char const *base, int *nb_tab, short size, bool neg)
{
    char *new_base = NULL;
    char *trasfert;
    short size_base = my_strlen(base);

    new_base = concat_char("", base[nb_tab[size] % size_base], false);
    --size;
    while ( size >= 0) {
        trasfert = new_base;
        new_base = concat_char(trasfert, base[nb_tab[size] % size_base], false);
        free(trasfert);
        size -= 1;
    }
    if (neg == true) {
        trasfert = new_base;
        new_base = concat_char(trasfert, '-', true);
        free(trasfert);
    }
    return (new_base);
}

static char *my_mallocnbr_base(char const *base_to, bool neg, int nb)
{
    char *new_base = NULL;
    short size = how_long_nb(nb) + 1;
    int *nb_tab = (int *) malloc(sizeof(int) * (size));

    if (nb < 0) {
        neg = true;
        nb *= -1;
    }
    nb_tab = put_the_transfair(nb_tab, nb, base_to);
    new_base = transform_nb_tab(base_to, nb_tab, size - 2, neg);
    free (nb_tab);
    return (new_base);
}

char *convert_base(char *nbr, char const *base_from, char const *base_to)
{
    int nb;
    char *new = NULL;

    if (nbr[0] != '\0' && base_from[0] == '\0' && base_to[0] == '\0')
        return (my_strdup(nbr));
    if (nbr == NULL || base_from == NULL || base_to == NULL ||
    nbr[0] == '\0' || base_from[0] == '\0') {
        new = malloc(sizeof(char) * 1);
        new[0] = '\0';
        return (new);
    }
    nb = my_getnbr_base(nbr, base_from);
    new = my_mallocnbr_base(base_to, false, nb);
    return (new);
}