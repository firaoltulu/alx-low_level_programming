#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - This function prints anything
 * that is passed.
 * @format: const char pointer that points to
 * list of types of arguments passed to the function.
 * Return: Nothing (Void).
 */
void print_all(const char *const format, ...)
{
int nine = 0;
char *ten, *one = "";

va_list list;

va_start(list, format);

if (format)
{
while (format[nine])
{
switch (format[nine])
{
case 'f':
printf("%s%f", one, va_arg(list, double));
break;
case 'i':
printf("%s%d", one, va_arg(list, int));
break;
case 'c':
printf("%s%c", one, va_arg(list, int));
break;
case 's':
ten = va_arg(list, char *);
if (!ten)
{
ten = "(nil)";
}
printf("%s%s", one, ten);
break;
default:
nine++;
continue;
}
one = ", ";
nine++;
}
}

printf("\n");
va_end(list);
}