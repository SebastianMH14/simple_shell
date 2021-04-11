#include "shell.h"

/**
 *_strncmp - compare two strings
 *@s1: string 1 to compare
 *@s2: string 2 to compare
 *@i: number of characters to compare
 *
 *Return: return 0
 */
int _strncmp(char *s1, char *s2, int i)
{
	int n = 0;

	if (!s1 || !s2 || i < 0)
	{
		return (1);
	}
	for (; (s1[n] || s2[n]) && i > 0; n++, i--)
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
	}
	return (0);
}
