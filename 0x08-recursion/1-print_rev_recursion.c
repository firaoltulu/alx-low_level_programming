#include "main.h"
/**
 * _print_rev_recursion - THis function Prints a string in reverse.
 * @s: Char pointer that points to the variable
 * that is passed to this function to be printed.
 * Return: Nothing (Void)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
