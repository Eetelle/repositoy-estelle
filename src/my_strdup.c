/*
** EPITECH PROJECT, 2025
** my_strdup.c
** File description:
** minishell
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "../include/my.h"

char *my_strdup(const char *src)
{
    int x = 0;
    char *dest;

    while (src[x] != '\0') {
        x++;
    }
    dest = malloc(sizeof(char) * (x + 1));
    if (!dest) {
        return NULL;
    }
    for (int i = 0; i <= x; i++) {
        dest[i] = src[i];
    }
    return dest;
    free(dest);
}
