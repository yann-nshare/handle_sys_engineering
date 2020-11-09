/*
** EPITECH PROJECT, 2020
** concat_params.c
** File description:
** [MAYEUL]
*/

#include "lib_my.h"

static int cont_all_letter(char **agv)
{
    unsigned int size = 0;

    for (register unsigned int y = 0; agv[y] != NULL; ++y) {
        for (register unsigned int x = 0; agv[y][x] != '\0'; ++x)
            ++size;
        ++size;
    }
    return (size);
}

char *set_new_av(char **const argv, char *new_av)
{
    register unsigned int trac_new = 0;

    for (register unsigned int y = 0; argv[y] != NULL; ++y) {
        for (register unsigned int x = 0; argv[y][x] != '\0'; ++x) {
            new_av[trac_new] = argv[y][x];
            ++trac_new;
        }
        if (argv[y + 1] == NULL)
            new_av[trac_new] = '\0';
        else
            new_av[trac_new] = '\n';
        ++trac_new;
    }
    return (new_av);
}

char *concat_params(int argc, char **argv)
{
    char *new_av;

    if (argc <= 0 || argv == NULL)
        return (NULL);
    new_av = (char *) malloc (sizeof(char) * cont_all_letter(argv));
    new_av = set_new_av(argv, new_av);
    return (new_av);
}