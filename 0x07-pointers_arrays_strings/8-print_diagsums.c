#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entrtwo point
 * @a: Char pointer that points to the variable
 * that is passed to this function
 * @size: Integer that is passed to this function
 * Return: Nothing (Void)
 */
void print_diagsums(int *a, int size)
{
	int ten, one, two;

	ten = 0;
	one = 0;
	two = 0;

	do {
		ten = ten + a[two * size + two];
		two++;
	} while (two < size);

	for (two = size - 1; two >= 0; two--)
	{
		one += a[two * size + (size - two - 1)];
	}

	printf("%d, %d\n", ten, one);
}
