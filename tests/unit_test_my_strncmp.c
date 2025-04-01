/*
** EPITECH PROJECT, 2025
** unit_test_my_strncmp.c
** File description:
** unit_test_my_strncmp.c
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int a);

Test(my_strncmp, compare_n_characters_of_two_strings)
{
    int a = my_strncmp("helloworld", "Worldhello", 5);
    int b = strncmp("helloworld", "Worldhello", 5);
    cr_assert_eq(a, b);
}

int my_strncmp(char const *s1, char const *s2, int a);

Test(my_strncmp, compare_n_characters)
{
    int a = my_strncmp("helloworld", "Worldhello", -5);
    cr_expect(a == 84);
}
