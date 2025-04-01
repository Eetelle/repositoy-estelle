##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC	=	src/*.c

SRC0    =	src/my_strcat.c \
        src/my_strcpy.c     \
        src/my_strlen.c     \
        src/my_strcmp.c     \
        src/my_strdup.c \
        src/my_strncmp.c    \

TESTS =   tests/unit_test_my_strcat.c \
	tests/unit_test_my_strcpy.c	\
	tests/unit_test_my_strlen.c	\
	tests/unit_test_my_strcmp.c	\
	tests/unit_test_my_strdup.c \
	tests/unit_test_my_strncmp.c	\

NAME    =       mysh

OPT = --coverage -lcriterion

all:    $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -g3

clean:
	rm -f $(NAME)
	rm -f *~
	rm -f *.gcda
	rm -f *.gcno

fclean: clean

re:	fclean all

unit_tests:	fclean all clean
	gcc -o unit_tests $(TESTS) $(SRC0) $(OPT)

tests_run:	unit_tests
	./unit_tests
