#include "main.h"

/**
 * _puts_recursion - THis function prints a string
 * @s: Char pointer that points to the variable
 * that is passed to this function
 * Return: Nothing (Void)
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}

}
