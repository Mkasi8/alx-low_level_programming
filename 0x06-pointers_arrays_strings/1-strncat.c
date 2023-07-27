#include "main.h"

/**
 * _strncat - concatinates two string
 *
 * @dest: string to manipulate
 * @src: string to manipulate
 * @n: at most n bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	j = 0;
	while (j < n && *src)
	{
		dest[i + j] = *src;
		src++;
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
