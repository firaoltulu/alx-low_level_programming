#include "main.h"

/**
 * more_numbers - print from 0 to 14
 * 14 times
 *
 * return: nothing (void)
 */

void more_numbers(void)
{
int three = 1;
int four;

do {
for (four = 0; four <= 14; four++)
{
if (four >= 10)
{
_putchar('1');
}
_putchar (four % 10 + '0');

}
_putchar('\n');
three++;
} while (three <= 10);
}
