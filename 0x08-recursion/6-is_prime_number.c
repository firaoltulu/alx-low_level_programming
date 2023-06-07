#include "main.h"

/**
 * firaol_inside - calculates if a number is prime recursively
 * @six: Interger that is passed to this function which
 * represent the number to evaluate
 * @seven: Interger that is passed to this function which
 * represent the iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int firaol_inside(int six, int seven)
{
if (seven == 1)
{
return (1);
}
if (six % seven == 0 && seven > 0)
{
return (0);
}
else
{
return (firaol_inside(six, seven - 1));
}
}

/**
 * is_prime_number - THis Function tells if an integer is
 * a prime number or not
 * @n: Interger that is passed to this function which
 * represent number the to evaluate
 *
 * Return: 1 if parameter n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (firaol_inside(n, n - 1));
}
}
