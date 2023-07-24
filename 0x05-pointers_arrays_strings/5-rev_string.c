#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length, j, i;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1
	i = 0;
	char v1, v2;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];

		s[i] = v2;
		s[j] = v1;

		i++;
		j--;
	}
}
