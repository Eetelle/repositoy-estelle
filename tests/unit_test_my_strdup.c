/*
** EPITECH PROJECT, 2025
** unit_test_my_strdup.c
** File description:
** unit test
*/

#include <criterion/criterion.h>
//#include "../my.h"

char *my_strdup(const char *src);
    
Test(strdup, allocates_the_memory_for_the_new_string)
{
    char *elle = "path to success";
    char *dup = my_strdup(elle);

    cr_assert_not_null(dup, "my_strdup returned NULL");
    cr_assert_str_eq(dup, elle, "The copied string is not the same");
    free(dup);
}
