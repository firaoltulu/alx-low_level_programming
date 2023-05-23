#include "main.h"

/**
 * print_last_digit - return the last digit of a number
 * @n: Is an int that is passed to this function from
 * the caller to compute the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int five;

	n < 0 ? n = -n : n = n;
	five = n % 10;
	five < 0 ? five = -five : five = five;

	_putchar(five + '0');
	return (five);
}
