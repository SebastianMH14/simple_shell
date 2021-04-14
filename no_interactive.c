#include "shell.h"

/**
*no_interactive - function for non-interactive mode
*
*Return: void
*/
void no_interactive(void)
{
	ssize_t readed;
	char *buff = NULL;
	size_t number;

	readed = getline(&buff, &number, stdin);
	buff[readed - 1] = 0;
	token(buff);
	free(buff);
}
