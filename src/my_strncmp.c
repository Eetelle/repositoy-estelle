/*
** EPITECH PROJECT, 2025
** my_strncmp.c
** File description:
** my_strncmp
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../include/my.h"
#include <stdlib.h>

int my_strncmp(const char *sent1, const char *sent2, int a)
{
    int b = 0;

    if (a <= b)
        return 84;
    for (; b < a; b++) {
        if (sent1[b] != sent2[b] || sent1[b] == '\0' || sent2[b] == '\0') {
            return sent1[b] - sent2[b];
        }
    }
    return 0;
}
