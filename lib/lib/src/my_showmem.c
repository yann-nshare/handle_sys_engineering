/*
** EPITECH PROJECT, 2020
** my_showmem.c
** File description:
** [MAYEUL]
*/


#include "lib_my.h"

static int print_fist_part(int nb, int cont_des, int nb_bis)
{
    for (; nb_bis != 0; nb_bis = nb_bis / 10)
        cont_des += 1;
    for (int x = 0; x != 8 - cont_des; x++)
        my_putchar('0');
    if (nb != 0)
        my_putnbr(nb);
    my_putstr(":   ");
    return (nb + 10);
}

static bool do_the_aligenment( int size, int pos)
{
    int nb_str = ((size - pos) * 2);
    int trasi = nb_str + (nb_str / 4);

    if (size <= 16)
        return (false);
    if (nb_str == (nb_str / 4) * 4)
        trasi -= 1;
    for (int x = 0; x != (39 - trasi); x++)
        my_putchar(' ');
    return (true);
}

static int print_the_exadecimale(char const *str, int pos)
{
    int space = 0;

    for (int x = pos; x <= (pos + 15); x++) {
        if (str[x] == '\0') {
            do_the_aligenment(my_strlen(str), pos);
            break;
        }
        if (space == 2) {
            my_putchar(' ');
            x--;
            space = 0;
            continue;
        }
        if (str[x] >= '\0' && str[x] <= 15)
            my_putchar('0');
        my_putnbr_base(str[x], "0123456789abcdef");
        space += 1;
    }
    my_putchar(' ');
    return (pos += 16);
}

static int print_char(char const *str, int pos, int pos_beafore)
{
    for (; pos_beafore <= (pos - 1) &&
    str[pos_beafore] != '\0'; pos_beafore += 1) {
        if (!(str[pos_beafore] >= ' ' && str[pos_beafore] <= '~'))
            my_putchar('.');
        else
            my_putchar(str[pos_beafore]);
    }
    return (pos_beafore);
}

int my_showmem(char const *str, int size)
{
    int nb = 0;
    int pos = 0;
    int pos_beafore = 0;

    if (str == NULL || size < 0)
        return (0);
    for (; size >= 0; size -= 16) {
        if (size == 0)
            break;
        nb = print_fist_part(nb, 0, nb);
        pos = print_the_exadecimale(str, pos);
        pos_beafore = print_char(str, pos, pos_beafore);
        my_putchar('\n');
    }
    return (0);
}