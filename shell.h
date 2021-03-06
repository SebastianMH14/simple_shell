#ifndef _SHELL_H
#define _SHELL_H

extern char **environ;

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int cont(char *buff);
int execute(char **command);
void token(char *command);
void no_interactive(void);
int _strncmp(char *s1, char *s2, int i);
void interactive(void);
void handle_sigint(int sig __attribute__((unused)));


#endif
