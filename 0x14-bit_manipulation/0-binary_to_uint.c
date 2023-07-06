#include "main.h"

/**
 * binary_to_uint - This Function converts
 * a binary number to unsigned int.
 * @b: Char pointer that points to a string
 * containing the binary number.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int one;
	unsigned int two = 0;

	if (!b)
	{
		return (0);
	}
	else
	{
		for (one = 0; b[one]; one++)
		{
			if (b[one] < '0' || b[one] > '1')
			{
				return (0);
			}
			two = 2 * two + (b[one] - '0');
		}
		return (two);
	}
}
