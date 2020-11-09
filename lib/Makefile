##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## [MAYEUL]
##

SUBDIRS = $(shell ls -d */)

NAME	=	libmy.a

NAME_TEST	=	tests

SUBDIRS = $(shell find . -type d)

HEADERS_DIR = $(shell find . -type d)

ADD_HEADERS_DIR = $(addprefix -I./, $(HEADERS_DIR))

CFLAGS	+= 	$(ADD_HEADERS_DIR) -W -Wall

SRC	=	$(shell find . -name '*.c')

OBJ	= 	$(SRC:.c=.o)

CC	= 	gcc

RM	=	rm -f

all:	$(NAME)

%.o:	%.c
	@$(CC) $(CFLAGS) $(LIB) -c -o $@ $< && echo -e "\e[96m[OK]\033[0m\e[1m\e[96m" $< "\033[0m" || echo -e "\e[91;5m[KO]\e[25m" $< "\033[5m\n    T'est même pas cappable de compiler une lib sans error $(USER) $(END)"


$(NAME):	$(OBJ)
	@ar rc -o $(NAME) $(OBJ)

clean:
	@$(RM) $(NAME)

re:	clean all


fclean: 	clean
	@-for i in $(SUBDIRS); do (cd $$i; $(RM) *~; $(RM) *.o; $(RM) vgcore.*; $(RM) *.gcda; $(RM) *.gcno); done

.PHONY							:	clean fclean tests_run clean test_execution whitecrean re all