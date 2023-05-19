#include <stdio.h>

/**
 * main - entry function
 *
 * @ac: used to accept values from the shell command
 * @av: used to accept values from the shell command
 *
 * Return: 0
 */

int main(int ac, char **av)
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
