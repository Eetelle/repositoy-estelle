/*
** EPITECH PROJECT, 2024
** my_strlen.c
** File description:
** strlen function
*/

#include <unistd.h>
#include "../include/my.h"

int my_strlen(char *str)
{
    int a = 1;

    while (str[a] != '\0')
        a++;
    return a;
}
