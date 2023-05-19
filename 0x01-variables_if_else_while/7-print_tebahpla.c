#include <stdio.h>

/**
 * main - Entry Function
 *
 * @ac: used to accept values from shell command
 * @av: used to accept values from shell command
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	char mirror = 'z';

	do {
		putchar(mirror);
		mirror--;
	} while (mirror >= 'a');

	putchar('\n');

	return (0);
}
