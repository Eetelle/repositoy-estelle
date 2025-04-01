/*
** EPITECH PROJECT, 2025
** my_clean_str
** File description:
** minishell2
*/

#include <string.h>
#include <stdio.h>
#include "../include/my.h"

int verify_space(char i)
{
    if (i == ' ' || i == '\t' || i == '\n') {
        return 1;
    }
    return 0;
}

int trip_space(char *str, int a)
{
    while (verify_space(str[a]) == 1)
        a++;
    return a;
}

char *remove_spaces(char *str)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(str);
    char *new_str = malloc(len + 1);

    if (!new_str)
        return NULL;
    while (str[i] && verify_space(str[i]))
        i++;
    for (; str[i]; i++) {
        if (!(verify_space(str[i]) && verify_space(str[i + 1]))) {
            new_str[j] = (str[i] == '\t') ? ' ' : str[i];
            j++;
        }
    }
    new_str[j] = '\0';
    return new_str;
}
