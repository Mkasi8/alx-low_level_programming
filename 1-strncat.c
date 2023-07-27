#include "main.h"

/**
 * main
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest != '\0')
		 i++;

	j = 0;

	while (src != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	
	dest[i] = '\0';
	return (dest);
}
