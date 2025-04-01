/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** writing of my_strcat
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>

char *my_strcat(char *dest, char *src)
{
    int a = 0;
    int b = 0;

    while (dest[a] != '\0') {
        a++;
    }
    while (src[b] != '\0') {
        dest[a] = src[b];
        a++;
        b++;
    }
    dest[a] = '\0';
    return (dest);
}
