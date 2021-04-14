#include "shell.h"

/**
 *interactive - function for interactive mode
 *
 *
 *Return: 0
 */

void interactive(void)
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
				write(1, "\n", 1);
				exit(0);
			}
			token(buff);
		}
	}
	free(buff);
}
