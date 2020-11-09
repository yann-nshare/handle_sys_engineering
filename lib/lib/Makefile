##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## [MAYEUL]:Lib_my
##

SUBDIRS = $(shell ls -d */)

NAME							=	libmy.a

NAME_TEST						=	tests

SRC								=	src/my_compute_power_rec.c		\
									src/my_compute_square_root.c	\
									src/my_find_prime_sup.c			\
									src/my_getnbr_base.c			\
									src/my_getnbr.c					\
									src/my_is_prime.c				\
									src/my_isneg.c					\
									src/my_putchar.c				\
									src/my_putstr.c					\
									src/my_revstr.c					\
									src/my_showmem.c				\
									src/my_showstr.c				\
									src/my_sort_int_array.c			\
									src/my_str_isalpha.c			\
									src/my_str_islower.c			\
									src/my_str_isnum.c				\
									src/my_str_isprintable.c		\
									src/my_str_isupper.c			\
									src/my_strcapitalize.c			\
									src/my_strcmp.c					\
									src/my_strcpy.c					\
									src/my_strlen.c					\
									src/my_strlowcase.c				\
									src/my_strncmp.c				\
									src/my_strncpy.c				\
									src/my_strstr.c					\
									src/my_strupcase.c				\
									src/my_swap.c					\
									src/concat_params.c				\
									src/convert_base.c				\
									src/my_sort_params.c			\
									src/my_str_to_word_array.c		\
									src/my_strcat.c					\
									src/my_strdup.c					\
									src/my_strncat.c				\
									src/my_concar_str.c				\
									src/my_putnbr_base.c			\
									src/my_putnbr.c			\
									src/my_is_printable.c\

CFLAGS							= -I./include/ 						\

TEST_SRC						=									\

MV								= mv

OBJ								=	$(SRC:.c=.o)

CC								= 	gcc

AR								=	ar rc

CRITERION						=	--coverage -lcriterion

RM								=	rm -f

all:	$(NAME)

test_execution					:
									gcovr --exclude tests/
									gcovr --exclude tests/ --branches

conpilation_test:
	@$(CC) $(FLAGS) -o $(NAME_TEST) $(INCLUDE) $(SRC) $(TEST)
	@./$(NAME_TEST)

tests_run: 	conpilation_test test_execution clean name_clean

%.o:	%.c
	@$(CC) $(CFLAGS) $(LIB) -c -o $@ $< && echo -e "\e[36m[OK]\033[0m\e[1m\e[36m" $< "\033[0m" || echo -e "\e[91;5m[KO]\e[25m" $< "\033[5m\n    T'est même pas cappable de compiler une lib sans error $(USER)"

$(NAME):	$(OBJ)
	@$(AR) ../$(NAME) src/*.o
	@$(RM) $(OBJ)

clean:
	@$(RM) ../$(NAME)

re:	clean all

fclean: 	clean
	@-for i in $(SUBDIRS); do (cd $$i; $(RM) *~; $(RM) *.o; $(RM) vgcore.*; $(RM) *.gcda; $(RM) *.gcno); done

.PHONY:	clean fclean tests_run clean test_execution whitecrean re all