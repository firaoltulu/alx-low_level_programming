#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This Function prints numbers,
 * followed by a new line.
 * @separator: const char pointer that points to
 * the string to be printed between numbers.
 * @n: const unsigned int to represent
 * The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 * Return: Nothing (Void).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list four;
unsigned int five;

va_start(four, n);
five = 0;
while (five < n)
{
printf("%d", va_arg(four, int));

if (five != (n - 1) && separator != NULL)
{
printf("%s", separator);
}

five++;
}

printf("\n");

va_end(four);
}
