#include <stdio.h>

/**
 * main - entry function
 *
 * Return: 0
 */

int main(void)
{
	char soup;

	for (soup = 'a'; soup <= 'z'; soup++)
	{
		/* check if soup is not equal to e & q */
		if (soup != 'e' && soup != 'q')
		{
			putchar(soup);
		}
	}

	putchar('\n');
	return (0);
}
