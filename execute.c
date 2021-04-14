#include "shell.h"

/**
 *execute - run the entered commands
 *@command: command entered by user
 *
 *Return: 1
 */

int execute(char **command)
{
	pid_t id;

	id = fork();

	if (id == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror("./shell");
			return (0);
		}
	}
	if (id != 0)
	{
		while
		(wait(NULL) != -1);
	}
	return (1);
}

/**
 *token - tokenize commands to be read
 *@command: command entered by user
 *
 *Return: void
 */

void token(char *command)
{
	char **token = NULL;
	char *aux = NULL;
	int i = 0;

	token = malloc((cont(command) + 1) * sizeof(char *));
	aux = strtok(command, " ");

	while (aux)
	{
		token[i] = aux;
		aux = strtok(NULL, " ");
		i++;
	}
	token[i] = aux;
	execute(token);
	free(token);
}

/**
 *cont - I count the number of words entered
 *@buff: where the words are stored
 *
 *Return: count
 */

int cont(char *buff)
{
	int i, count = 0;

	for (i = 0; buff[i]; i++)
		if (buff[i] == 32 && buff[i + 1] != 32 && buff[i + 1] != 0)
			count++;

	if (buff[0] != 32)
		count++;

	return (count);
}


