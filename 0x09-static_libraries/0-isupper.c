#include "main.h"

/**
 * _isupper - Check if the argument passed to
 * the function is uppercase letters
 * @c: is the char to be check
 *
 * Return: 0 if its not uppercase or
 * 1 it its uppercase
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
