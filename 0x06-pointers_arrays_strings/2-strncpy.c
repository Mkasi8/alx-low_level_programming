#include "main.h"
/**
 * _strncpy - copies one string into another
 *
 * @dest: destination variable to copy string to
 * @src: source string to copy from
 * @n: number of bits to copy
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

