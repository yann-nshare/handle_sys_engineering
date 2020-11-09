##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## [MAYEUL]
##

SUBDIRS = $(shell ls -d */)

NAME	=	libmy.a

NAME_TEST	=	tests

INCLUDE	=	-I./include/

CC	= 	gcc

RM	=	rm -f

all:	$(NAME)

$(NAME):
	@make -C ./lib
	@make -C ./new_lib_nb
	@make -C ./listlib


clean:
	@$(RM) $(NAME)

re:	clean all


fclean: 	clean
	@-for i in $(SUBDIRS); do (cd $$i; $(RM) *~; $(RM) *.o; $(RM) vgcore.*; $(RM) *.gcda; $(RM) *.gcno); done

.PHONY							:	clean fclean tests_run clean test_execution whitecrean re all