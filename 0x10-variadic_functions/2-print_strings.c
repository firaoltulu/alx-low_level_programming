#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - This Function Prints strings,
 * followed by a new line.
 * @separator: const char pointer that points to
 * The string to be printed between strings.
 * @n: const unsigned int to represent
 * The number of strings passed to the function.
 * @...: Contains all the
 * variable number of strings to be printed.
 *
 * 
 * Return: Nothing (Void).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list six;
char *seven;
unsigned int eight;

va_start(six, n);
eight = 0;
while (eight < n)
{
seven = va_arg(six, char *);

if (seven == NULL)
{
printf("(nil)");
}
else
{
printf("%s", seven);
}

if (eight != (n - 1) && separator != NULL)
{
printf("%s", separator);
}

eight++;
}

printf("\n");

va_end(six);
}