#include "main.h"

/**
 * get_bit - this function returns the value
 * of a bit at an index in a decimal number.
 * @n: Int to reprsent a number to search.
 * @index: Int to reprsent a index of the bit
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int six;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		six = (n >> index) & 1;

		return (six);
	}
}
