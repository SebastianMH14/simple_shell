#ifndef _SHELL_H
#define _SHELL_H

extern char **environ;

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int cont(char * buff);
int execute(char * command);

#endif
