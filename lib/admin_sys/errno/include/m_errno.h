/*
** EPITECH PROJECT, 2019
** CPE_corewar_2019
** File description:
** errno.h
*/

#ifndef M_ERRNO_H
#define M_ERRNO_H

#include <stdlib.h>

#define MSG_ERROR   {\
                    "not error detected", \
                    "invalid arg", \
                    "invalid value", \
                    "invalid opp", \
                    "invalide syntaxe", \
                    "invalide syntaxe argument"\
                    };

#define MSG_WARNING {\
                    "", \
                    "", \
                    ""\
                    };

//change of include
//
#define OCTT(t) sizeof(t)


#define ALLOC(type, size) malloc(OCTT(type) * size)


//exemple : value is a variable from allocetion, type it's type for allocation, size length of allocation
#define MY_MALLOC(variable, type, size) variable = ALLOC(type, size);


#define CREATE_ERRNO(name) MY_MALLOC(extern errno_t name, errno_t, 1)


// #define UPDATE_ERRNO(errno) ;
///


// errno value       Error
// 1             /* Operation not permitted */
// 2             /* No such file or directory */
// 3             /* No such process */
// 4             /* Interrupted system call */
// 5             /* I/O error */
// 6             /* No such device or address */
// 7             /* Argument list too long */
// 8             /* Exec format error */
// 9             /* Bad file number */
// 10            /* No child processes */
// 11            /* Try again */
// 12            /* Out of memory */
// 13            /* Permission denied */

typedef enum errno_type_e
{
    ERROR_TYPE,
    WARNING_TYPE,
} errno_type_e;

typedef enum error_value_e
{
    NOT_ERROR,
    ERROR_NBR_ARG,
    ERROR_VALUE,
    ERROR_OPP,
    ERROR_SYNTAXE,
    ERROR_SYNTAXE_ARG,
} error_value_e;

typedef enum warning_value_e
{
    NOT_WARNING,
    WARNING_NBR_ARG,
    WARNING_VALUE,
    WARNING_OPP,
    WARNING_SYNTAXE,
    WARNING_SYNTAXE_ARG,
} warning_value_e;

typedef enum exit_value_e
{
    SUCCESS = 0,
    FAIL = 1,
    CRACH = 84,
} exit_value_e;

typedef struct error_t
{
    char *errno_msg;
    error_value_e value;
} error_t;

typedef struct warning_t
{
    char *errno_msg;
    warning_value_e value;
} warning_t;

typedef union type_errno_u
{
    warning_t warning_type;
    error_t error_type;
} type_errno_u;

typedef struct errno_t
{
    int tag;
    type_errno_u type_errno;
    exit_value_e exit;
} errno_t;

extern errno_t errno_;

void print_error(const char *str, int c);
void set_errno\
(const int tag, const int msg_index, int value, const exit_value_e exit);

#endif