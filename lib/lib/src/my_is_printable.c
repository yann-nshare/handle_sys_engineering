/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myprintf-yann.nshare
** File description:
** my_is_printable.c
*/

int my_is_printable(const char c)
{
    if (c >= ' ' && c <= '~')
        return (1);
    return (0);
}