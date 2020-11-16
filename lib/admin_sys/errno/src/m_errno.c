/*
** EPITECH PROJECT, 2019
** CPE_corewar_2019
** File description:
** m_errno.c
*/

#include "listlib.h"
#include "m_errno.h"

void print_error(const char *str, int c)
{
    str = str;
    c = c;
    // my_printf((char *)str, c);
}

void set_errno\
(const int tag, const int msg_index, int value, const exit_value_e exit)
{
    char *msg_error[] = MSG_ERROR;
    char *msg_warning[] = MSG_WARNING;

    switch (tag) {
        case ERROR_TYPE:
            errno_.type_errno.error_type.errno_msg = msg_error[msg_index];
            errno_.type_errno.error_type.value = (error_value_e)value;
            break;
        case WARNING_TYPE:
            errno_.type_errno.warning_type.errno_msg = msg_warning[msg_index];
            errno_.type_errno.warning_type.value = (warning_value_e)value;
            break;
        default:
            return;
    } errno_.tag = tag;
    errno_.exit = exit;
}