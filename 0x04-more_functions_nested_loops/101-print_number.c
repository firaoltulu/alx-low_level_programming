#include "main.h"

/**
 * print_number - prints an integer value that is passed to
 * it
 * @n: Integer that are used to accept values
 * to be printed
 */

void print_number(int n)
{
unsigned int six;
int loc = n;

if (loc < 0)
{
six = -loc;
_putchar('-');
}
else
{
six = loc;
}

if (six / 10)
{
print_number(six / 10);
}

_putchar((six % 10) + '0');
}
