/*
** EPITECH PROJECT, 2025
** my_putstr.c
** File description:
** minishell
*/

#include "../include/my.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int d = 0;

    for (d = 0; str[d] != '\0'; d++) {
        my_putchar(str[d]);
    }
}
