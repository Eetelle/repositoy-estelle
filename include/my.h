/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** minishell
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef MY_H
    #define MY_H

typedef struct env_s {
    struct env_t *next;
    char *var;
} env_t;
char *cut_create_path(char *copy);
int verify_space(char i);
int trip_space(char *str, int a);
char *remove_spaces(char str[]);
void my_shell(void);
void execute_cmd(char **env, char *cmd);
void process_commands(char **env, char *str);
void handle_input(char **env, char *str);
void my_putchar(char c);
int my_cd_command(char *str);
int my_strcmp(const char *sent1, const char *sent2);
char *my_strcat(char *dest, char *src);
int my_strncmp(const char *sent1, const char *sent2, int a);
char *return_of_path(char **env);
char **parse_cmd(char *str);
char *create_path(char **env, char *cmd);
void exec_cmd(char **argv, char **env);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(const char *src);
int my_strlen(char *str);
int my_putstr(char const *str);
#endif
