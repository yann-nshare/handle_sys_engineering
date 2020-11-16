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

typedef struct linked_list
{
    char *data;
    struct linked_list *next;
} linked_list_t;

typedef struct linked_list_advance_t
{
    int hash;
    struct linked_list_advance_t *next;
} linked_list_advance_t;

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