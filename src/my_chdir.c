/*
** EPITECH PROJECT, 2025
** my_chdir.c
** File description:
** my_chdir.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

void my_shell(void)
{
    my_putstr("\033[0;33m");
    my_putstr(
    "                  .       .  .  ,--. \n"
    ",-,-. . ,-. . ,-. |-. ,-. |  |     / \n"
    "| | | | | | | `-. | | |-' |  |  ,-'  \n"
    "' ' ' ' ' ' ' `-' ' ' `-' `' `' `--- \n");
}

int my_cd_command(char *str)
{
    char **tab;

    if (my_strncmp(str, "cd", 2) == 0 || my_strncmp(str, "cd ", 3) == 0) {
    if (my_strcmp(str, "cd") == 0) {
            chdir("/home");
            return 1;
        }
        tab = parse_cmd(str);
        chdir(tab[1]);
        return 1;
    }
    return 0;
}
