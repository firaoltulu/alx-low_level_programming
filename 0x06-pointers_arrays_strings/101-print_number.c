#include "main.h"

/**
 * print_number - print numbers chars
 * @n: Integer that is passed to this function to be Printed.
 * Return: nothing (void)
 */

void print_number(int n)
{
unsigned int nine;

nine = n;
if (n < 0)
{
_putchar('-');
nine = -n;
}

if (nine / 10 != 0)
{
print_number(nine / 10);
}
_putchar((nine % 10) + '0');
}
