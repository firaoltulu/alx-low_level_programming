#include "main.h"

/**
 * print_square - is a function thats prints a square
 * of the size parameter
 * @size: Integer that tells the size of the square
 *
 * return: nothing (void)
 */

void print_square(int size)
{
if (size > 0)
{
int five, six;

for (five = 0; five < size; five++)
{
for (six = 0; six < size; six++)
{
_putchar('#');
}
_putchar('\n');
}

}
else
{
_putchar('\n');
}
}
