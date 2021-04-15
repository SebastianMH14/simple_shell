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
