/*
** EPITECH PROJECT, 2025
** my_concat_of_path.c
** File description:
** my_concat_of_path.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
char *dir;
char *pathcomplet;
int len;
pid_t pid;
int status;

char **parse_cmd(char *str)
{
    char **argv = malloc(sizeof(char *) * (100));
    int a = 0;
    char *tok;

    if (!argv)
        return NULL;
    tok = strtok(str, " \t\n");
    while (a < 9) {
        argv[a] = tok;
        a++;
        tok = strtok(NULL, " \t\n");
    }
    argv[a] = NULL;
    return argv;
}

char *cut_create_path(char *copy)
{
    free(copy);
    return NULL;
}
char result[1024];
    int i = 0;
    int j = 0;
    int capitalize = 0;

    while (str[i] != '\0') {
        while (str[i] && !is_alpha(str[i]) && !is_digit(str[i]))
            i++;
	if (is_alpha(str[i]) || is_digit(str[i])) {
            if (capitalize && is_alpha(str[i]))
                result[j++] = to_upper(str[i]);
            else
                result[j++] = to_lower(str[i]);
            i++;
	    while (is_alpha(str[i]) || is_digit(str[i])) {
                result[j++] = to_lower(str[i]);
                i++;
            }
            capitalize = 1;
        }
    }
    result[j] = '\0';
    my_putstr(result);
    write(1, "\n", 1);
}


char *create_path(char **env, char *cmd)
{
    char *path = return_of_path(env);
    char *copy = my_strdup(path);

    dir = strtok(copy, ":");
    while (dir != NULL) {
        len = my_strlen(dir) + my_strlen(cmd) + 2;
        pathcomplet = malloc(len);
        if (!pathcomplet)
            break;
        my_strcpy(pathcomplet, dir);
        my_strcat(pathcomplet, "/");
        my_strcat(pathcomplet, cmd);
        if (access(pathcomplet, X_OK) == 0) {
            free(copy);
            return pathcomplet;
        }
        free(pathcomplet);
        dir = strtok(NULL, ":");
        }
    cut_create_path(copy);
}

void exec_cmd(char **argv, char **env)
{
    char *path_complet = create_path(env, argv[0]);

    if (pathcomplet == NULL) {
        write(2, argv[0], my_strlen(argv[0]));
        write(2, ": command not found.\n", 21);
        return;
    }
    pid = fork();
    if (pid == -1) {
        free(pathcomplet);
        return;
    }
    if (pid == 0) {
        execve(pathcomplet, argv, env);
        perror(argv[0]);
        exit(0);
    } else {
        waitpid(pid, &status, 0);
    }
}
