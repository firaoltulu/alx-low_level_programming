#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Integer Pointer that points to the variable that is passed to
 * this function
 * @b: Integer Pointer that points to the variable that is passed to
 * this function
 * Return: nothing (void)
 */
void swap_int(int *a, int *b)
{
	int one;

	one = *a;
	*a = *b;
	*b = one;
}
