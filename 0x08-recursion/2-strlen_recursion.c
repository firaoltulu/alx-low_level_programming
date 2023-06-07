#include "main.h"
/**
 * _strlen_recursion -This function Returns the length of a string.
 * @s: Char pointer that points to the variable
 * that is passed to this function  to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int one = 0;

	if (*s)
	{
		one++;
		one += _strlen_recursion(s + 1);
	}

	return (one);
}
