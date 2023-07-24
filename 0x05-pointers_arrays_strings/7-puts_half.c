#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be manipulated
 */

void puts_half(char *str)
{
	int length, i, j;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	i = (length - 1) / 2;
	j = 0;

	while (s[j] != s[i])
	{
		_putchar(s[j]);
		j++;
	}
	_putchar('\n');
}
