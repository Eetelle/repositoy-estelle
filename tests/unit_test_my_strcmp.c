/*
** EPITECH PROJECT, 2025
** unit_test_my_strcmp.c
** File description:
** unit_test_my_strcmp.c
*/

#include <criterion/criterion.h>

int my_strcmp(const char *sent1, const char *sent2);

Test (my_strcmp, compares_characters_)
{
    int a = my_strcmp("Helloworld", "Helloworld") == 0;
    int b = strcmp("Helloworld", "Helloworld") == 0;
    cr_assert_eq(a, b);
}

Test (my_strcmp, compares_chars)
{
    int a = my_strcmp("Hello", "Helloworld") != 0;
    int b = strcmp("Helloworld", "Helloworld") != 0;
    cr_assert_neq(a, b);
}
