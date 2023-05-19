#include <stdio.h>

/**
 * main - Entry Function
 *
 * @ac: used to accept values from the shell command
 * @av: used to accept values from the shell command
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int Numberz;

	for (Numberz = 48; Numberz < 58; Numberz++)
	{
		putchar(Numberz);
	}
	putchar('\n');
	return (0);
}

