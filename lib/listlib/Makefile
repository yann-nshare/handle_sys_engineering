##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Makefile
##

SUBDIRS = $(shell ls -d */)

NAME							=	libmy.a

NAME_TEST						=	tests

SRC								=	src/my_add_data_to_list.c			\
									src/my_apply_on_matching_nodes.c	\
									src/my_apply_on_nodes.c				\
									src/my_delete_nodes.c				\
									src/my_find_node.c					\
									src/my_list_size.c					\
									src/my_list_size.c					\
									src/my_print_lists.c				\
									src/my_rev_list.c					\
									src/my_tab_array_to_list.c			\

CFLAGS							= -I./include/ 						\

TEST_SRC						=									\

MV								= mv

OBJ								=	$(SRC:.c=.o)

CC								= 	gcc

AR								=	ar rc

CRITERION						=	--coverage -lcriterion

RM								=	rm -f

all:	$(NAME)

whitecrean						:
									clear

test_execution					:
									gcovr --exclude tests/
									gcovr --exclude tests/ --branches

conpilation_test:
	@$(CC) $(FLAGS) -o $(NAME_TEST) $(INCLUDE) $(SRC) $(TEST)
	@./$(NAME_TEST)

tests_run: 	conpilation_test test_execution clean name_clean

%.o:	%.c
	@$(CC) $(CFLAGS) $(LIB) -c -o $@ $< && echo -e "\e[36m[OK]\033[0m\e[1m\e[36m" $< "\033[0m" || echo -e "\e[91;5m[KO]\e[25m" $< "\033[5m\n    T'est même pas cappable de compiler une linkedlist sans error $(USER)"

$(NAME):	$(OBJ)
	@$(AR) ../libmy.a src/*.o
	@$(RM) $(OBJ)

fclean: 	clean
	@-for i in $(SUBDIRS); do (cd $$i; $(RM) *~; $(RM) *.o; $(RM) vgcore.*; $(RM) *.gcda; $(RM) *.gcno); done

clean:
	@-$(RM) ../$(NAME)

re								:	clean all

.PHONY							:	clean fclean tests_run clean test_execution whitecrean re all
