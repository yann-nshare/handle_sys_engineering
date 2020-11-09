##
## EPITECH PROJECT, 2019
## makefile
## File description:
## nofink
##

######################################    COLOR CODE    #################################################################################
RED			=	\e[91m
BLUE		=	\e[92m
TURQUOISE	=	\e[96m
GREEN		=	\e[32m
BLINK_RED	=	\e[91;5m
BOLD_GREEN	=	\e[32;1m
NO_BLINK	=	\e[25m
END			=	\e[0m
#########################################################################################################################################

#######################################################    PRINT MODE    #############################################################
CLEAR_START = echo -e "$(RED) $(PRINT) CLEANED $(PRINT)$(END)"
CLEAR_END = echo -e "$(RED) $(PRINT) CLEANED SUCCESSFUL $(PRINT)$(END)"

COMPIL_LIB_START = echo -e "$(TURQUOISE) $(PRINT) LIB COMPILATION $(PRINT)$(END)"
COMPIL_LIB_END = echo -e "$(TURQUOISE) $(PRINT) LIB COMPILATION SUCCESSFUL $(PRINT)$(END)"
COMPIL_PROJECT_START = echo -e "$(GREEN) $(PRINT) PROJECT COMPILATION $(PRINT)$(END)"
COMPIL_PROJECT_END = echo -e "$(GREEN) $(PRINT) PROJECT COMPILATION SUCCESSFUL $(PRINT)$(END)"

PRINT = $(shell printf '%0.1s' '*'{1..40})
#########################################################################################################################################

####################################################### MAKE INTERATIVE ################################################################
define test_fonctionnel =
#!/bin/bash

DELAY=5 # Number of seconds to display results
while true; do
    clear
	cat << EOF
        Please Select:
        1. Display Helps
        2. test_unitaire
        3. test functinnel
        4. all test
        5. Display a file
        0. Quit
EOF
    read -p "Enter selection [0-5] > "
    case "$REPLY" in
        0)
            break
            ;;
        1)
            make help
            ;;
        2)
            make tests_run
            ;;
        3)
			./tests/test_fonctionnel/test_fonctionnel.sh
            ;;
        4)
            ./tests/test_fonctionnel/test_fonctionnel.sh
			make test_run
            ;;
        5)
            echo "Entry the file:"
            read file2
            more $file2
            ;;
        *)
            echo "Invalid entry."
            ;;
    esac
    sleep "$DELAY"
done
echo "Program terminated."
endef
########################################################################################################################################


###################################################### GLOBALE VARIABLE #################################################################
USER := $(shell whoami)

NAME	=	my_project

NAME_TEST	=	all_test

CC	=	gcc

RM	=	rm -rf

PROJECT := $(shell realpath .)

SUBDIRS = $(shell find . -type d)

HEADERS_DIR = $(shell find . -type d)
########################################################################################################################################


########################################################## GIT VARIABLE #################################################################
git: m = git auto

git: f-add = .

debuggit: m = debug git auto

FILE = .gitignore
########################################################################################################################################


############################################################## FLAGS ####################################################################
# LIB = -L./lib -lmy

ADD_HEADERS_DIR = $(addprefix -I./, $(HEADERS_DIR))

CFLAGS	+= 	$(ADD_HEADERS_DIR) -W -Wall

CFLAGCLANG += clang -Wno-padded -Weverything -g -g3 -ggdb

CRITERION_FLAGS		=	--coverage -lcriterion
##########################################################################################################################################

# SRC	=	$(addprefix src/, )

# SRC	=	$(shell find lib -name '*.c')

SRC	=	$(shell find src -name '*.c')

MAIN	=	$(shell find . -name '*main.c')

# TEST_SRCS	=	$(addprefix tests/, )\

TEST_SRCS	=	$(shell find tests -name '*.c')

TEST_SRCS	+=	$(SRC)

OBJ	= 	$(SRC:.c=.o) $(MAIN:.c=.o)


############################################################# MAKE RULE ################################################################
all: 	$(NAME)

ifeq ($(DEBUG),yes)
	$(CFLAGS) += g g3 -ggdb
endif

%.o:	%.c
	@$(COMPIL_PROJECT_START)
	@$(CC) $(CFLAGS) $(LIB) -c -o $@ $< && echo -e "\e[32m[OK]\033[0m\e[1m\e[32m" $< "\033[0m" || echo -e "\e[91;5m[KO]\e[25m" $< "\033[5m\n    T'est même pas cappable de compiler sans error $(USER) $(END)"

CLIB:
	@$(COMPIL_LIB_START)
	@$(MAKE) -C lib
	@$(COMPIL_LIB_END)

$(NAME): CLIB $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LIB)
	@$(eval($(MAK) := 9))
	@echo -e " ██╗   ██╗███████╗ ███╗   ██╗ ███╗   ██╗";
	@echo -e " ╚██╗ ██╔╝██╔══██║ ████╗  ██║ ████╗  ██║";
	@echo -e "  ╚████╔╝ ███████║ ██╔██╗ ██║ ██╔██╗ ██║";
	@echo -e "   ╚██╔╝  ██╔══██║ ██║╚██╗██║ ██║╚██╗██║";
	@echo -e "    ██║   ██║  ██║ ██║ ╚████║ ██║ ╚████║";
	@echo -e "    ╚═╝   ╚═╝  ╚═╝ ╚═╝  ╚═══╝ ╚═╝  ╚═══╝\033[0m";
	# @mv lib/$(NAME) .
	# @ar rc -o $(NAME) $(OBJ)

ifeq ($(MAK),)
	@if [ $(USER) != "YANN" ]; then echo -e "\e[1mCOMPILATION BY $(USER)\e[4                                                                                                                                                                                                                                             m\nPS: makefile fais par yann nshare (yann.nshare@epitech.eu)\e[0m \e[5mHAHAHA!\e[0m"; fi
ifeq ($(USER),YANN)
	@echo -e "\e[1mCOMPILATION BY THE KING \e[4mYANN NSHARE\e[0m \033[5mHAHAHA!\e[0m"
	@echo -e "\033[32m$(PRINT) COMPLETED SUCCESSFUL $(PRINT)\033[0m"
endif
endif

git: fclean# for use:   make git m="your message"
	@git pull
	@git status
	@git add "$(f-add)"
	@git commit -m "$(m)"
	@git push

debuggit: fclean
	@git add .
	@git commit -m "$(msm)"
	@git pull
	@git push

functionnel: ; $(value test_fonctionnel)
.ONESHELL:

tests_run:	CLIB
	@$(CC) -o exetest -I./include $(TEST_SRCS) $(LIB) $(CRITERION_FLAGS) $(ADD_HEADERS_DIR)
	@./exetest


# delete files
fclean: clean
	@-$(CLEAR_START)
	@$(MAKE) fclean -C lib
	@-for i in $(SUBDIRS); do (cd $$i; $(RM) *~; $(RM) *.o; $(RM) vgcore.*; $(RM) *.gcda; $(RM) *.gcno; $(RM) *.gcdo; $(RM) *.a); done
	@$(CLEAR_END)

clean:
	@-$(RM) $(NAME)

ifeq ($(USER),YANN)
	@clear
endif

ifeq ($(USER),MAYEUL)
	@clear
endif

test:	tests_run
	gcovr --exclude tests/ > test_1
	gcovr --exclude tests/ --branches > test_2
	make
	clear
	cat test_1
	cat test_2

re:	fclean all

## quick description of makefile
help:
	@echo -e "\e[mmon executable \e[4m${NAME}\e[0m"
	@echo -e "\e[mj'utilise les flags \e[4m${CFLAGS}\e[0m et \e[4m$(CFLAGCLANG)\e[0m"

.PHONY:	all re	clean	fclean dclean whiteterminal tests_run libclean git debuggit
#######################################################################################################################################