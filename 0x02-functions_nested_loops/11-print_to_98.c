#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: Is an int that is passed to this function from
 * the caller to be print from this number
 */
void print_to_98(int n)
{

if (n <= 98)
{
int two;
for (two = n; two <= 98; two++)
{
if (two != 98)
printf("%d, ", two);
else if (two == 98)
printf("%d\n", two);
}
}
else if (n >= 98)
{
int two;
for (two = n; two >= 98; two--)
{
if (two != 98)
printf("%d, ", two);
else if (two == 98)
printf("%d\n", two);
}
}
else
{
}
}
