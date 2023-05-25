#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer that indicate the number of times
 * the character _ should be printed
 *
 * return: nothing (void)
 */
void print_line(int n)
{
	int ten = n;

	if (ten <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int nine;

		for (nine = 1; nine <= ten; nine++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
