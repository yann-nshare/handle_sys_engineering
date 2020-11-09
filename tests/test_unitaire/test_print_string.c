/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myprintf-yann.nshare
** File description:
** test_print_nbr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "print.h"

void redirect_all_std(void);

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello  world");
    cr_assert_stdout_eq_str("hello  world");
}

Test(my_printf, simple_string2, .init = redirect_all_std)
{
    my_printf("\n");
    cr_assert_stdout_eq_str("\n");
}

Test(my_printf, simple_string3, .init = redirect_all_std)
{
    my_printf("azertyuiopqsdfghjklmwxcvbn,;:!?./%%*&é\"'\\(-_ç");
    cr_assert_stdout_eq_str("azertyuiopqsdfghjklmwxcvbn,;:!?./%*&é\"'\\(-_ç");
}

Test(my_printf, simple_string4, .init = redirect_all_std)
{
    my_printf("123456789098765432123456789098765432123456789009876543212345789876543456787654345678765434567876543456787654567876545678765678765678765678765");
    cr_assert_stdout_eq_str("123456789098765432123456789098765432123456789009876543212345789876543456787654345678765434567876543456787654567876545678765678765678765678765");
}

Test(my_printf, simple_string5, .init = redirect_all_std)
{
    char str[5];

    my_strcpy(str, "toto");
    str[1] = 6;
    my_printf("%S\n", str);
    cr_assert_stdout_eq_str("t\\006to\n");
}