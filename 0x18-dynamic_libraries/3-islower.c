#include "main.h"

/**
 * _islower - check if char is lowercase || NOT lowercase
 *
 * @c: is the char that is passed to this function
 * from the caller to be checked
 *
 * Return: 1 if char is lowercase, 0 if char is not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
