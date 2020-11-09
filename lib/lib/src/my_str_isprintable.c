/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** [MAYEUL]
*/

int my_is_printable(const char c);

int my_str_isprintable(char const *str)
{
    for (int x = 0; str[x] != '\0'; x++) {
        if (my_is_printable(str[x]))
            continue;
        return (0);
    }
    return (1);
}