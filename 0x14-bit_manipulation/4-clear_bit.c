#include "main.h"

/**
 * clear_bit - this function sets
 * the value of a given bit to 0.
 * @n: pointer to the number to change
 * @index: int that represents a index
 * of the bit to clear.
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = (~(1UL << index) & *n);
		return (1);
	}
}
