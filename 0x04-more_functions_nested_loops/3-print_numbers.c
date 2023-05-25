#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * return: nothing (void)
 */

void print_numbers(void)
{
	char two;

	for (two = '0'; two <= '9'; two++)
	{
		_putchar(two);
	}
	_putchar('\n');
}

