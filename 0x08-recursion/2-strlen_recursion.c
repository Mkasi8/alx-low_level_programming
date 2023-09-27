#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string to calculate the length
 * return: int(length)
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return n + _strlen_recursion(s + 1);
	}
}
