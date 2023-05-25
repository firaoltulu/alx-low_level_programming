#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: Integer that tells how many number of times
 * the character \ should be printed
 *
 * return: nothing (void)
 */

void print_diagonal(int n)
{
	int eight = n;

	if (eight > 0)
	{
		int seven = 0, six;

		do {
			for (six = 0; six < eight; six++)
			{
				if (six == seven)
					_putchar('\\');
				else if (six < seven)
					_putchar(' ');
			}
			_putchar('\n');
			seven++;
		} while (seven < eight);
	}
	else
	{
		_putchar('\n');
	}
}
