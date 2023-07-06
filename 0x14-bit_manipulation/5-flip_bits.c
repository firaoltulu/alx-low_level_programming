#include "main.h"

/**
 * flip_bits - this function counts
 * the number of bits to change
 * to get from one number to another.
 * @n: int that represents a first number.
 * @m: int that represents a second number.
 *
 * Return: number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int seven, eight = 0;
	unsigned long int nine;
	unsigned long int ten = n ^ m;

	for (seven = 63; seven >= 0; seven--)
	{
		nine = ten >> seven;
		if (nine & 1)
			eight++;
	}

	return (eight);
}
