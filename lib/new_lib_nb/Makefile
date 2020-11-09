##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## [MAYEUL]: no_my_get_one_line, no return_nb_how
##

SUBDIRS = $(shell ls -d */)

NAME							=	libmy.a

NAME_TEST						=	tests

MV								= 	mv

SRC								=	src/rm_char_in_str.c					\
									src/char_to_float.c						\
									src/my_advance_word_array.c				\
									src/my_concat_string.c					\
									src/remouve_extra_space.c				\
									src/decal_off_nb.c						\
									src/put_off_char.c						\
									src/my_re_alloc.c						\
									src/ret_beafore_last_char.c				\
									src/ret_str_after_c.c					\
									src/ret_str_how_where.c					\
									src/put_char_fist_char_in_str.c			\
									src/free_array.c						\
									src/is_nb.c								\
									src/my_memset.c							\
									src/itoa.c							\
									src/infin_convert_base.c							\
									src/op.c\
									src/do_op.c\

CFLAGS							= 	-I./include/ -fno-builtin -W -Wall -g3

INCLUDE							=	-I./include/							\

TEST_SRC						=											\

OBJ								=	$(SRC:.c=.o)

CC								= 	gcc

AR								=	ar rc

CRITERION						=	--coverage -lcriterion

RM								=	rm -f

all:	$(NAME)

test_execution					:
									gcovr --exclude tests/
									gcovr --exclude tests/ --branches

conpilation_test				:
	@$(CC) $(FLAGS) -o $(NAME_TEST) $(INCLUDE) $(SRC) $(TEST)
	@./$(NAME_TEST)

tests_run: 	conpilation_test test_execution clean name_clean

%.o:	%.c
	@$(CC) $(CFLAGS) $(LIB) -c -o $@ $< && echo -e "\e[36m[OK]\033[0m\e[1m\e[36m" $< "\033[0m" || echo -e "\e[91;5m[KO]\e[25m" $< "\033[5m\n    T'est même pas cappable de compiler une advance lib sans error $(USER)"

$(NAME):	$(OBJ)
	@$(AR) ../libmy.a ./src/*.o
	@$(RM) $(OBJ)


clean:
	@$(RM) ../$(NAME)

re:	fclean all

fclean: clean
	@-for i in $(SUBDIRS); do (cd $$i; $(RM) *~; $(RM) *.o; $(RM) vgcore.*; $(RM) *.gcda; $(RM) *.gcno); done

.PHONY:	clean fclean tests_run clean test_execution re all
