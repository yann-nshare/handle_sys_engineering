/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** infin_conve_base.c
*/

#include "lib_nb.h"

int c_find(char c, const char *s)
{
    int x;

    if (!s)
        return -1;
    for (x = 0; s[x] && s[x] != c; x++);
    return s[x] ? x : -1;
}

char *revert_string(char *s, int size)
{
    int i = 0;
    char tmp;

    if (!s)
        return s;
    --size;
    while (i < size) {
        tmp = s[i];
        s[i++] = s[size];
        s[size--] = tmp;
    }
    return s;
}

char *convert_from(const char *s, const char *base)
{
    CHECK_NULL(s)CHECK_NULL(base)
    int size = my_strlen(base), size2 = my_strlen(s), x, pos;
    LAST_V

    CHECK_CV
    itoa(size, b_size);
    res[0] = '0';
    res[1] = 0;
    pow[0] = '1';
    pow[1] = 0;
    for (x = size2 - 1; x >= 0; --x) {
        pos = c_find(s[x], base);
        if (pos == -1) {
            free(res);
            free(pow);
            return 0;
        } itoa(pos, container);
        IF_MUL_TRUE
    } free(pow);
    return res;
}

char *convert_to(const char *s, const char *to_base)
{
    char *copy = my_strdup(s);
    char length_base[255] = {0};
    char *ret;
    LT_VAR

    CHECK_M_BASE
    itoa(my_strlen(to_base), length_base);
    for (char *tmp; my_strcmp(copy, "0"); copy = tmp) {
        tmp = itoa_to_str(do_op(my_getnbr(copy), my_getnbr(length_base), '%'));
        integ = my_getnbr(tmp);
        free(tmp);
        ret[i++] = to_base[integ];
        if (i > size - 1) {
            size += 10;
            ret = my_realloc(ret, size);
        } tmp = itoa_to_str(
            do_op(my_getnbr(copy), my_getnbr(length_base), '/'));
        free(copy);
    } free(copy); CHECK_V_ZERO
    ret[i] = 0;
    return revert_string(ret, my_strlen(ret));
}

char *infin_convert_base
(const char *number, const char *from_base, const char *to_base)
{
    char *tmp;
    char *tmp2;

    tmp = convert_from(number, from_base);
    tmp2 = convert_to(tmp, to_base);
    free(tmp);
    return tmp2;
}