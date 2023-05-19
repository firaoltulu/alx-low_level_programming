#include <stdio.h>

/**
 * main - entry function
 *
 * @ac: used to accept command from the shell command
 * @av: used to accept command from the shell command
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	char soup;

	for (soup = 'a'; soup <= 'z'; soup++)
	{
		/* check if soup is not equal to e & q */
		if (soup != 'e' && soup != 'q')
		{
			putchar(soup);
		}
		soup++;
	}

	putchar('\n');
	return (0);
}
