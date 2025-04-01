/*
** EPITECH PROJECT, 2025
** my_prompt.c
** File description:
** shell1
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
char **argv;
char *str;

char *return_of_path(char **env)
{
    for (int i = 0; env[i]; i++) {
        if (my_strncmp("PATH=", env[i], 5) == 0)
            return env[i] + 5;
    }
}

static void cut_exec_prompt(char *str, char **env)
{
    argv = parse_cmd(str);
        if (argv && argv[0])
            exec_cmd(argv, env);
        free(argv);
}

static void second_cut_exec_prompt(char **env, char *cmd)
{
    if (my_cd_command(cmd) != 1) {
        cut_exec_prompt(cmd, env);
    }
}

void handle_input(char **env, char *str)
{
    str[my_strlen(str) - 1] = '\0';
    if (my_strcmp(str, "exit") == 0) {
        free(str);
        exit(0);
    }
    process_commands(env, str);
}

void process_commands(char **env, char *str)
{
    char *cmd;
    char *saveptr = NULL;

    cmd = strtok_r(str, ";", &saveptr);
    while (cmd) {
        execute_cmd(env, cmd);
        cmd = strtok_r(NULL, ";", &saveptr);
    }
}

void execute_cmd(char **env, char *cmd)
{
    char *clean_cmd = remove_spaces(cmd);

    if (clean_cmd && clean_cmd[0] != '\0') {
        second_cut_exec_prompt(env, clean_cmd);
    }
    free(clean_cmd);
}

static void exec_prompt(char **env)
{
    size_t len = 0;
    ssize_t read;

    my_shell();
    while (1) {
        my_putstr("\033[0;33m$> \033[0m");
        read = getline(&str, &len, stdin);
        if (read == -1) {
            free(str);
            return;
        }
        handle_input(env, str);
    }
}

int main(int argc, char **argv, char **env)
{
    char *str;

    exec_prompt(env);
    return 0;
}
