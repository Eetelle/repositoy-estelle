/*
** EPITECH PROJECT, 2025
** unit_test_my_strcat.c
** File description:
** unit_test_my_strcat.c
*/

#include <criterion/criterion.h>

char *my_strcat(char *dest, char *src);

Test(strcat, concats_two_strings)
{
    char dest[30] = "hello ";
    char src[30] = "world";
    my_strcat(dest, src);
    cr_assert_str_eq(dest, "hello world");
}
