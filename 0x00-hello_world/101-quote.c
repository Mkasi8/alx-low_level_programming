#include <stdio.h>
#include <unistd.h>
/*
 * main - Starting point
 * Description: prints a line of string the way it is
 * returns 1
 */

int main(void)
{
	int l;

	l = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", l);

	return (1);
}