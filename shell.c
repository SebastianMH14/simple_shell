#include "shell.h"

/**
 *handle_sigint - function ctrl + c
 *@sig: void
 *
 *Return: void
 */

void handle_sigint(int sig __attribute__((unused)))
{
	write(STDOUT_FILENO, "\n#cisfun$ ", 10);
}

/**
 *interactive - function for interactive mode
 *
 *
 *Return: 0
 */

int interactive(void)
{
	char *buff = NULL;
	ssize_t readed = 0;
	size_t number = 0;

	signal(SIGINT, handle_sigint);
	while (1)
	{

		if (readed != EOF)
		{
			write(1, "#cisfun$ ", 9);
			readed = getline(&buff, &number, stdin);
			buff[readed - 1] = 0;
			if (readed == EOF)
			{
				free(buff);
				
				exit(0);
			}
			token(buff);
		}
		else
		{
			free(buff);
			exit(127);
		}
	}
	free(buff);
	return (0);
}
