#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * @str: the string to output
 */

void _puts(char *str)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
