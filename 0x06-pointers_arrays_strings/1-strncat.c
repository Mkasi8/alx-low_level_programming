#include "main.h"

/**
 * -strncat - concatinates two strings
 *
 *  @dest: string to concatinate
 *  @src: string to concatinate
 *
 *  Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		 i++;

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	
	dest[i] = '\0';
	return (dest);
}
