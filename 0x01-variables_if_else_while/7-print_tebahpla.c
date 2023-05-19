#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: 0
 */

int main(void)
{
	char mirror = 'z';

	do {
		putchar(mirror);
		mirror--;
	} while (mirror >= 'a');

	putchar('\n');

	return (0);
}
