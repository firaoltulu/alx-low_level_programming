#include "main.h"

/**
 * times_table - prints the multiplication
 * of a number from 0-9 table
 *
 * return: Nothing (void)
 */

void times_table(void)
{
	int multi;
	int seven = 0;

	while (seven < 10)
	{
		for (int eight = 0; eight < 10; eight++)
		{

			multi = seven * eight;

			if (eight == 0)
			{
				_putchar(multi + '0');
			}
			if (multi < 10 && eight != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else if (multi >= 10 && eight != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
		}
		_putchar('\n');
		seven++
	}
}

