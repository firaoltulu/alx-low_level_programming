#include "main.h"

/**
 * _pow_recursion - this Function returns the value of x
 * raised to the power of y
 * @x: Interger that is passed to this function which represent
 * value to raise
 * @y:Interger that is passed to this function which represent
 * power
 *
 * Return: The result of the power
 */
int _pow_recursion(int x, int y)
{
int two = x;
int three = y;

if (three < 0)
return (-1);
if (three == 0)
return (1);
return (two * _pow_recursion(two, three - 1));
}
