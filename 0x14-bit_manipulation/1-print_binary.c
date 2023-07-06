#include "main.h"

/**
 * print_binary - This Function prints
 * the binary equivalent of a decimal number.
 * @n: Int to prepresent a number to
 * print in binary.
 *
 * Return: the converted number.
 */

void print_binary(unsigned long int n)
{
	int three, four = 0;
	unsigned long int five;

	for (three = 63; three >= 0; three--)
	{
		five = n >> three;

		if (five & 1)
		{
			_putchar('1');
			four++;
		}
		else if (four)
			_putchar('0');
	}
	if (!four)
		_putchar('0');
}
