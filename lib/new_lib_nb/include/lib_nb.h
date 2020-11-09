/*
** EPITECH PROJECT, 2020
** lib_nb.h
** File description:
** Mkergall
*/

#ifndef _NEW_LIB_NB_
#define _NEW_LIB_NB_

#include "../../lib/include/lib_my.h"

#define IS_NB(caracter) ((caracter >= 48 && caracter <= 57) ? true : false)

#define CHECK_TRUE(x) if (!x) return (84);
#define CHECK_NULL(x) if (!x) return NULL;

#define CHECK_ERROR if (id[4] == 0) { free_array((void **)str); free(ans);\
            return NULL; } CHECK_NULL(ans);

#define APPLY_FOR_LTB if (my_strlen(divise) < 10 && my_strlen(nbr) < 10){ \
            itoa(my_getnbr(nbr) % my_getnbr(divise), ans);\
            free_array((void **)str); return (ans); }

#define CHECK_CV if (!size || !size || !(res = malloc(sizeof(*res) * 2))\
        || !(pow = malloc(sizeof(*pow) * 2)))\
        return 0;

#define LAST_V char b_size[10] = {0};\
    char *res = 0;\
    char *pow = 0;\
    char *tmp, *tmp2;\
    char container[10] = {0};

#define IF_MUL_TRUE if ((tmp = itoa_to_str(do_op(my_getnbr(pow), \
            my_getnbr(container), '*')))) {\
            tmp2 = itoa_to_str(do_op(my_getnbr(tmp), my_getnbr(res), '+'));\
            free(res);\
            res = tmp2;\
            free(tmp);\
            tmp = itoa_to_str(do_op(my_getnbr(pow), my_getnbr(b_size), '*'));\
            free(pow);\
            pow = tmp;\
        }

#define CHECK_ERNO(number, divise) \
    if (my_strcmp(number, divise) == 0) { \
        free(last_nbr);\
        free(divisor);\
        return (my_strdup("1"));\
    } else if (smallest_nbr_str(divise, number)) {\
        free(last_nbr);\
        free(divisor);\
        return my_strdup("0");\
    }

#define CHECK_TRUE(x) if (!x) return (84);
#define CHECK_NULL(x) if (!x) return NULL;

#define ITOC(x, check_x) ((check_x <= 9 && check_x >= 0) ? ((x + '0')) : (x))

#define CTOI(x, check_x) ((check_x >= '0' && \
                check_x <= '9') ? ((x - '0')) : (x))

#define APPLY_CARRY if (i >= 0) {\
            if (( ( (CTOI(a[i], a[i])) * (CTOI(b[j], b[j])) ) + carry ) > 9)\
                result = (( ( (CTOI(a[i], a[i]))\
                * (CTOI(b[j], b[j])) ) + carry) % 10);\
            else\
                result = (CTOI(a[i], a[i]) * CTOI(b[j], b[j])) + carry;\
            }\
            else\
                result = carry;\
            if (i >= 0) {\
            ((CTOI(a[i], a[i]) * CTOI(b[j], b[j]) + carry) > 9)\
            ? (carry = (( ( (CTOI(a[i], a[i])) * (CTOI(b[j], b[j])) )\
            + carry ) / 10)) : (carry = 0);\
            }\
            else\
                carry = 0;


#define ALL_VARIABLE int idx = 0;\
    int temp = CTOI(number[idx], number[idx]);\
    int i = 0;\
    int comma = 0;\
    int sup = 0;\
    int zero = 0;

#define CHECK_V_ZERO if (i == 0) {\
        ret[0] = to_base[0];\
        ret[1] = 0;\
        return (ret);\
        }

#define VAR_DIV int size1, size2, pos = 0, sup, x, tmp_size, old_size;\
    char  *ret, *tmp, *tmp2, *multi;

#define VAR_MOD int size1, size2, sup;\
    char *tmp, *tmp2, *multi;

#define DO_MOD \
    if (!n1 || !n2)\
        return NULL;\
    if (!my_strcmp(n2, "0"))\
        return NULL;\
    if (!my_strcmp(n2, "1"))\
        return my_strdup("0");\
    size1 = my_strlen(n1);\
    size2 = my_strlen(n2);\
    if (size1 < size2)\
        return my_strdup(n1);\
    if (!my_strcmp(n1, n2))\
        return my_strdup("0");\
    tmp = my_strdup(n1);

#define LT_VAR int size = 255;\
    int i = 0;\
    int integ;

#define CHECK_M_BASE if (!s || !to_base)\
        return 0;\
    if (!(ret = malloc(sizeof(*ret) * size)))\
        return 0;

unsigned int cont_char(const char *restrict const str, char c);
char *rm_char_in_str(char *restrict const str,
unsigned int how, unsigned int were);
float char_to_float(char *str);
char **my_advance_word_array(char *restrict const str, const char c);
char *my_concat_string(char *restrict const, char *restrict const);
char *rm_extra_space(char *);
char *decal_off_nb(char *, unsigned int);
char *put_of_char(char *, const char);
char *my_re_alloc(char **, const char *);
char *my_realloc(char *ptr, int size);
char *ret_beafore_last_char(char *, const char);
char *ret_last_str_after_c(const char *restrict const, const char);
char *ret_str_how_where(const char *restrict, unsigned int how, \
unsigned int were);
char *put_char_fist_char_in_str(char *restrict, const char);
void **free_array(void **array);
bool is_nb(char *restrict const);
bool is_float(char *restrict const);
signed char is_float_error_message(char *restrict const);
char *my_memset(char *str, const char c, const unsigned int len);

int itoa(int value, char *ptr);
char *itoa_to_str(int value);
char *infin_convert_base\
(const char *number, const char *from_base, const char *to_base);
int add(int a, int b);
int sub(int a, int b);
int _div(int a, int b);
int mul(int a, int b);
int mod(int a, int b);
int do_op(int a, int b, char op);

#endif /*!_NEW_LIB_NB_*/