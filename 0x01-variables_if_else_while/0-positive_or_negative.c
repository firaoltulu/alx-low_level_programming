#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry function
 *
 * @ac: used to accept values from the command shell
 * @av: used to accept values from the shell command line
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

