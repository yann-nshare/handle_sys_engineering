/*
** EPITECH PROJECT, 2020
** lib_eval_expr.h
** File description:
** [MAYEUL]
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdio.h>

#define __FAST_CALCUL__
#define __ERROR_OUTPUT_NB__

#define __MODIFICATION_ON_STRING__
#define __NUMPER_MDIFICATION__
#define __CARACTER_PRINT__
#define __STRING__MODIFICATION__
#define __ARRAW__
#define __CTYPE__

#include<stdarg.h>

#include <stddef.h>
#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <sys/stat.h>
#include <fcntl.h>

#include <stdbool.h>

#ifdef __STDBOOL_H
    static const char neg_false = -1
#endif

#if defined(__FAST_CALCUL__)
    #define ABS(value) ((value > 0) ? value : (value * -1))
    #define TO_ASCII(caracter) (caracter + 48)
    #define TO_NUMBER(number) (number - 48)
    #define A_SUP_B(A, B) ((A > B) ? true : false)
    #define A_INF_B(A, B) ((B > A) ? true : false)
    #define A_EGAL_B(A, B) ((A == B) ? true : false)
    #define A_NO_EGAL_B(A, B) ((A != B) ? true : false)
    #define A_POS(A) ((A > 0) ? true : false)
    #define A_NEG(A) ((A < 0) ? true : false)
    #define A_POS_EGAL(A) ((A >= 0) ? true : false)
    #define A_NEG_EGAL(A) ((A <= 0) ? true : false)
    #define INVERSE(A) (A *= -1)
#endif

#include <ctype.h>

#if defined(_CTYPE_H)
    #define IS_NB(caracter) ((caracter >= 48 && caracter <= 57) ? true : false)
    #define IS_UPPER(caracter) ((caracter >= 65 && caracter <= 90) \
        ? true : false)
    #define IS_LOWER(caracter) ((caracter >= 97 && caracter <= 122) \
        ? true : false)
    #define IS_PRINTABLE(caracter) ((caracter >= 32 && caracter <= 126) \
        ? true : false)
#endif

#define __BASE_FONCTION__

#ifdef __BASE_FONCTION__

struct stracmp
{
    unsigned int ws1;
    unsigned int ws2;
};

int my_stracmp(char const *s1, char const *s2, \
unsigned int n, struct stracmp cmp);
char *my_strndup(char *str, unsigned int n);

void my_putchar(char c);
unsigned int my_strlen(const char *str);

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);

char *concat_char(const char *s1, char c, bool change_order);
char *concat_str(const char *s1, const char *s2);
char *concat_str_transfert(char **s1, const char *s2, bool change_order);

int my_find_prime_sup(int nb);
int my_getnbr_base(char *str, char const *base);

int my_getnbr(char const *restrict str);

int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
int my_putstr(char const *str);

int my_putnbr_base(int nbr, char const *base);
int my_putnbr(int nb);

char *my_revstr(char *str);
int my_showmem(char const *restrict str, int size);
int my_showstr(char const *str);

char **my_sort_params(char ** av);
void my_sort_int_array(int *array, int size);

int my_str_isalpha(char const *restrict str);
int my_str_islower(char const *restrict str);
int my_str_isnum(char const *restrict str);
int my_str_isprintable(char const *restrict str);
int my_str_isupper(char const *restrict str);

char *my_strcapitalize(char *str);
int my_strcmp(char const *restrict s1, char const *restrict s2);
char *my_strcpy(char *dest, char const *restrict src);

char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *concat_params(int argc, char **argv);
char *convert_base(char *nbr, char const *base_from, char const *base_to);

unsigned int cont_dec(int nb);

int my_strncmp_real(char const *restrict s1, char const *restrict s2, int n);
int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *restrict str, char const *restrict to_find);
char *my_strcat(char *dest, char const *src);
char *my_strdup(char const *src);
char *my_strncat(char *dest, char const *src, int nb);

char *transform_int_char(int nb);

char **my_str_to_word_array(char const *str);

void my_swap(int *a, int *b);

int my_is_printable(const char c);

#endif

#endif /* _MY_H_ */