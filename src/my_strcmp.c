/*
** EPITECH PROJECT, 2025
** my_strcmp.c
** File description:
** strcmp function
*/

#include <stdio.h>
#include "../include/my.h"

int my_strcmp(const char *sent1, const char *sent2)
{
    int i = 0;

    while (sent1[i] != '\0' && sent2[i] != '\0') {
        if (sent1[i] != sent1[i]) {
            return sent1[i] - sent2[i];
        }
        i++;
    }
    return sent1[i] - sent2[i];
}
