#include "main.h"

/**
 * print_most_numbers - print from 0 to 9
 * except 2 & 4 using _putchar()
 *
 * return: nothing (void)
 */

void print_most_numbers(void)
{
	char three;

	for (three = '0'; three <= '9'; three++)
	{
		switch (three)
		{
			case '2':
				break;
			case '4':
				break;
			default:
				_putchar(three);
				break;
		}
	}
	_putchar('\n');
}
