/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** minishell
*/

#include <unistd.h>
#include "../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int a = 0;

    while (src[a] != '\0') {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return 0;
}
