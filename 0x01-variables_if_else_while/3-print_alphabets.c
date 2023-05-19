#include <stdio.h>

/**
 * main - entry function
 *
 * Return: 0
 */

int main(void)
{
	char xx = 'a';
	char yy = 'A';

	for (xx = 'a'; xx <= 'z'; xx++)
	{
		putchar(xx);
	}
	for (yy = 'A'; yy <= 'Z'; yy++)
		putchar(yy);
	putchar('\n');
	return (0);
}
