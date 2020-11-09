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

void set_errno_(errno_t *errno_, char *msg,
exit_value_e exit, errno_value_e value)
{
    errno_->errno_msg = msg;
    errno_->exit = exit;
    errno_->value = value;
}

void set_errno_from_type(errno_t *errno_, unsigned int type)
{
    char *msg[] = MSG_ERROR;

    errno_->errno_msg = msg[type];
    errno_->value = type;
    errno_->exit = (type == NOT_ERROR) ? (0) : (FAIL);
}