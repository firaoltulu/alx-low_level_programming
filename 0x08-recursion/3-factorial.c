#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n:Interger that is passed to this function
 * to return the factorial from
 *
 * Return: factorial of parameter n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
