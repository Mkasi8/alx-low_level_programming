#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char i, j;

	i = 0;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
