/*
** EPITECH PROJECT, 2025
** unit_test_my_strcpy.c
** File description:
** unit_test_my_strcpy.c
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, copy_in_empty_array)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}
