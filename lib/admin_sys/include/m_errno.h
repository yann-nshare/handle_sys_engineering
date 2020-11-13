/*
** EPITECH PROJECT, 2019
** CPE_corewar_2019
** File description:
** errno.h
*/

#ifndef M_ERRNO__H
#define M_ERRNO__H

#define MSG_ERROR {"not error detected", "invalid arg", "invalid value", \
"invalid opp", "invalide syntaxe", "invalide syntaxe argument"}

typedef enum errno_value_e
{
    NOT_ERROR,
    ERROR_NBR_ARG,
    ERROR_VALUE,
    ERROR_OPP,
    ERROR_SYNTAXE,
    ERROR_SYNTAXE_ARG,
} errno_value_e;

typedef enum exit_value_e
{
    SUCCESS = 0,
    FAIL = -1,
    CRACH = 84,
} exit_value_e;

typedef struct errno_t
{
    errno_value_e value;
    exit_value_e exit;
    char *errno_msg;
} errno_t;

void print_error(const char *str, int c);
void set_errno_(errno_t *errno_, char *msg,
exit_value_e exit, errno_value_e value);
void set_errno_from_type(errno_t *errno_, unsigned int type);

#endif