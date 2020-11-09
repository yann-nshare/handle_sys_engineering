/*
** EPITECH PROJECT, 2020
** B-CPE-100-PAR-1-3-cpoolday09-yann.nshare
** File description:
** my.h
*/
#if !defined(LISTLIB_H)
#define LISTLIB_H

#define CHECK_TRUE(x) if (!x) return (84);
#define CHECK_NULL(x) if (!x) return NULL;

#define ITOC(x, check_x) ((check_x <= 9 && check_x >= 0) ? ((x + '0')) : (x))
#define CTOI(x, check_x)\
            ((check_x >= '0' && check_x <= '9') ? ((x - '0')) : (x))

#define APPLY_CARRY \
            if (( ( (CTOI(a[i], a[i])) * (CTOI(b[j], b[j])) ) + carry ) > 9)\
                result = (( ( (CTOI(a[i], a[i]))\
                * (CTOI(b[j], b[j])) ) + carry) % 10);\
            else\
                result = (CTOI(a[i], a[i]) * CTOI(b[j], b[j])) + carry;\
            ((CTOI(a[i], a[i]) * CTOI(b[j], b[j]) + carry) > 9)\
            ? (carry = (( ( (CTOI(a[i], a[i])) * (CTOI(b[j], b[j])) )\
            + carry ) / 10)) : (carry = 0);


#define ALL_VARIABLE int idx = 0;\
    int temp = CTOI(number[idx], number[idx]);\
    int i = 0;\
    int comma = 0;\
    int sup = 0;\
    int zero = 0;

#define OP_DIV for (; 10 + comma > i; idx++) { \
        if (number[idx] == '\0' && temp % divisor == 0 && temp == 0)\
            break;\
        ans[i++] = ITOC((temp / divisor), (temp / divisor));\
        (temp % divisor == 0 && number[idx] == '0') ? (zero = 1) : (zero = 0);\
        if (temp % divisor != 0 && comma == 0 && !number[idx]) {\
            ans[i++] = '.';\
            comma = 2;\
        }\
        sup = CTOI(number[idx], number[idx]);\
        if (!number[idx])\
            idx--;\
        temp = ((temp % divisor) * 10) + sup;}

#define CHECK_DIV if (my_strlen(divise) > 9)\
        return NULL;\
    if (my_getnbr(divise) == 0) return NULL;

#define CHECK_IF_ZERO if (zero)\
        ans[i++] = ITOC((temp / divisor), (temp / divisor));\
    if (my_strlen(ans) == 0) return "0";

#define CHECK_ZERO(x) if (x[0] == '0') return my_strdup("0");

typedef struct linked_list
{
    char *data;
    struct linked_list *next;
} linked_list_t;

int my_apply_on_matching_nodes(linked_list_t *begin, int(*f)(),
void const *data_ref, int (*cmp)());
int my_apply_on_nodes(linked_list_t *begin, int(*f)(void *));
int my_delete_nodes(linked_list_t **begin, void const *data_ref, int(*cmp)());
linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
int(*cmp)());
int my_list_size(linked_list_t const *begin);
linked_list_t *my_tab_array_to_list(int ac, char * const *av);
int my_add_data_to_list(linked_list_t **list, char *arg);
void my_rev_list(linked_list_t **begin);
void my_print_lists(linked_list_t *lists);

#endif // LISTLIB_H