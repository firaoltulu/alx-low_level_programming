#include "main.h"

/**
 * print_alphabet_x10 - output 10 times the alphabet in lowercase
 * followed by a new line.
 *
 */

void print_alphabet_x10(void)
{
	char two;
	int three  = 0;

	do {
		two = 'a';
		while (two <= 'z')
		{
			_putchar(two);
			two++;
		}
		_putchar('\n');
		three++;

	} while (three < 10);
}
