#include "main.h"

/**
 * set_bit - this function sets a bit
 * at a given index to 1.
 * @n: int pointer that points to
 * the number to change.
 * @index: int that represents a
 * index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = ((1UL << index) | *n);
		return (1);
	}
}
