#include "main.h"
/**
 * print_alphabet - outputs all the english lowercase alphabet
 *
 * this little program is written by firaol tulu
 *
 * Return: nothing(void)
 */

void print_alphabet(void)
{
	char one = 'a';

	do {
		/* code */
		_putchar(one);
		one++;
	} while (one <= 'z');
	_putchar('\n');
}
