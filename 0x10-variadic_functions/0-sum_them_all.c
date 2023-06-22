#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - This Functions Returns
 * the three of all its paramters.
 * @n: const unsigned int that represent
 * The number of paramters passed to the function.
 * @...: Contains all the integers to be added.
 *
 * Return: Integer the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list one;
unsigned int two = 0, three = 0;

va_start(one, n);

while (two < n)
{
three += va_arg(one, int);
two++;
}

va_end(one);

return (three);
}
