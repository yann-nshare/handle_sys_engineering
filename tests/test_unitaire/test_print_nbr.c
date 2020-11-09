/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myprintf-yann.nshare
** File description:
** test_print_nbr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "print.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_nbr, .init = redirect_all_std, .timeout = 10.0)
{
    my_printf("%d%d", 43, 1234567);
    cr_assert_stdout_eq_str("431234567");
}

Test(my_printf, simple_nbr2, .init = redirect_all_std)
{
    // my_printf("%d%d%d%d", 1, 2, 3, 4);
    // cr_assert_stdout_eq_str("1234");
    my_printf("%34d%1234567654323459999999999999999999999999999999999999999999999999999999999999999996d", 43, 12345678);
    cr_assert_stdout_eq_str("4312345678");
    // my_printf("%34d%1234567654323456d", 43, 12345678);
    // cr_assert_stdout_eq_str("4312345678");
}

Test(my_printf, simple_nbr3, .init = redirect_all_std)
{
    my_printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%d", 98);
    cr_assert_stdout_eq_str("%%%%%%%%%%%%%%%%%%%%98");
}

Test(my_printf, simple_nbr4, .init = redirect_all_std)
{
    my_printf("%f", 1.1234);
    cr_assert_stdout_eq_str("1.1234");
    // my_printf("%.1f", 1.1);
    // cr_assert_stdout_eq_str("1.1");
    // my_printf("%.3f", 1.1);
    // cr_assert_stdout_eq_str("1.100");
    // my_printf("%22f", 1.1234);
    // cr_assert_stdout_eq_str("1.1234");
    // my_printf("%.f", 1.1234);
    // cr_assert_stdout_eq_str("1");
    // my_printf("%.2f", 1.1234);
    // cr_assert_stdout_eq_str("1.12");
    // my_printf("%.09f", 1.1234567891);
    // cr_assert_stdout_eq_str("1.123456789");
}