#include "main.h"

/**
 * Firaol_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @four:Interger that is passed to this function which
 * represent number to calculate the sqaure root of
 * @five: Interger that is passed to this function which
 * represent iterator
 *
 * Return:Integer that represent the  square root
 */
int Firaol_sqrt_recursion(int four, int five)
{
if (five * five > four)
{
return (-1);
}
if (five * five == four)
{
return (five);
}
return (Firaol_sqrt_recursion(four, five + 1));
}

/**
 * _sqrt_recursion - this function returns the natural
 * square root of a number
 * @n: Interger that is passed to this function which
 * represent number to calculate the square root of
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (Firaol_sqrt_recursion(n, 0));
}
}
