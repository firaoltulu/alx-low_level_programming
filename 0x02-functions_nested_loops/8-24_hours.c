#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 *
 * return: nothing (void)
 */

void jack_bauer(void)
{
	int six, seven;

	six = 0;
	do {
		for (seven = 0; seven < 60; seven++)
		{
			_putchar((six / 10) + '0');
			_putchar((six % 10) + '0');
			_putchar(':');
			_putchar((seven / 10) + '0');
			_putchar((seven % 10) + '0');
			_putchar('\n');
		}
		six++;
	} while (six < 24);
}
