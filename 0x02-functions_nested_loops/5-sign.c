#include "main.h"

/**
 * print_sign - Check for the number sign
 *
 * @n: Is an int that is passed to this function from
 * the caller to be checked
 * Return: 1 greater than zero,
 * 0 if n is zero,
 * -1 if n is less than zero
 */

int print_sign(int n)
{
	switch (n)
	{
		case n > 0:
			_putchar('+');
			return (1);
		case n == 0:
			_putchar('0');
			return (0);
		case n < 0:
			_putchar('-');
			return (-1);
		default:
		return (2);
	}
}
