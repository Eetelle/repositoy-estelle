/*
** EPITECH PROJECT, 2025
** unit_test_my_strlen.c
** File description:
** unit_test_my_strlen.c
*/

#include <criterion/criterion.h>

int my_strlen(char *str);

Test(my_strlen, fin_a_number_of_characters)
{
    int a;

    a = my_strlen("father");
    cr_expect(a != 0);
}
