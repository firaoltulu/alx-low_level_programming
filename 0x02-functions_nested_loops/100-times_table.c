#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: Is an int that is passed to this function from
 * the caller it is number of the times table
 *
 * return: nothing (void)
 */

void print_times_table(int n)
{
int one, two, multi;

if (n >= 0 && n <= 15)
{
for (one = 0; one <= n; one++)
{
for (two = 0; two <= n; two++)
{
multi = two * one;
fir_check(one, two, multi);
}
_putchar('\n');
}
}
}
/**
 * fir_check - prints
 *
 * @one: Is an int that is passed to this function from
 * the caller
 * @two: Is an int that is passed to this function from
 * the caller
 * @k: Is an int that is passed to this function from
 * the caller
 *
 * return: nothing (void)
 */
void fir_check(int one, int two, int k)
{
	if (two == 0)
	{
		_putchar(k + '0');
	}
	else if (k < 10 && two != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}
	else if (k >= 10 && k < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	}
	else if (k >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((k / 100) + '0');
		_putchar(((k / 10) % 10) + '0');
		_putchar((k % 10) + '0');
	}
}

