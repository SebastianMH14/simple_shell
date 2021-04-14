#include "shell.h"

/**
*main- checks interactive or not interactive
*
*Return: void
*/
int main(void)
{
	if (isatty(STDIN_FILENO))
	{
		no_interactive();
	}
	else
	{
		interactive();
	}
		return (0);
}
