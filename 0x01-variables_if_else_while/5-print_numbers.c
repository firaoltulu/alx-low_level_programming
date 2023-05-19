#include <stdio.h>

/**
 * main - entry function
 *
 * @ac: used to accept values from shell command
 * @av: used to accept values from shell command
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int Numbers = 0;

	/* Prints the 0-9 */
	while (Numbers < 10)
	{
		printf("%d", Numbers);
		Numbers++;
	}
	printf("\n");
	return (0);
}
