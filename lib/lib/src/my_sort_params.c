/*
** EPITECH PROJECT, 2020
** my_sort_params.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

bool do_the_permutation_strstr(char **av, signed int poss)
{
    char *transfer = NULL;

    if (av[poss + 1] == NULL)
        return (true);
    if (my_strlen(av[poss]) <= my_strlen(av[poss + 1]))
        return (false);
    transfer = av[poss + 1];
    av[poss + 1] = av[poss];
    av[poss] = transfer;
    return (true);
}

bool check_same_letter(char *restrict element, \
char *restrict next_element, char **av, signed int poss)
{
    char *transfer;
    signed int cont_same = 0;

    if (!my_strcmp(element, next_element))
        return (true);
    for (register int x = 0; element[x] != '\0' \
    && next_element[x] != '\0'; ++x) {
        if (element[x] < next_element[x])
            return (true);
        else if (element[x] > next_element[x]) {
            transfer = av[poss + 1];
            av[poss + 1] = av[poss];
            av[poss] = transfer;
            break;
        }
        ++cont_same;
    }
    if (cont_same == (int)my_strlen(element) || cont_same == (int)my_strlen(next_element))
        return (!do_the_permutation_strstr(av, poss));
    return (false);
}

bool check_nice_order(char **av)
{
    for (register int x = 0; av[x + 1] != NULL; ++x)
        if (check_same_letter(av[x],  av[x + 1], av, x) == false)
            return (true);
    return (false);
}

char **my_sort_params(char ** av)
{
    for (;check_nice_order(av) == true;);
    return (av);
}