#include <stdio.h>

/**
 * main - Entry Function
 *
 *
 * Return: 0
 */

int main(void)
{
	char insomnia = 'a';

	while (insomnia <= 'z')
	{
		putchar(insomnia);
		insomnia++;
	}

	putchar('\n');
	return (0);
}
