#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of char : %li byte(s)", sizeof(char));
	printf("Size of an int : %li byte(s)", sizeof(int));
	printf("Size of long int : %li byte(s)", sizeof(long int));
	printf("Size of long int : %li byte(s)", sizeof(long long int));
	printf("Size of float : %li byte(s)", sizeof(float));
	return (0);
}
