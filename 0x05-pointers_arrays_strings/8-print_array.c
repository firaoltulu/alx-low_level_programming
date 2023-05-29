#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: Integer array pointer that points to the variable
 * that is passed to this function to print all elements of the array
 * @n: Integer variable and is the number of elements OF
 * the array to be printed
 * Return: nothing (void)
 */
void print_array(int *a, int n)
{
int three;

for (three = 0; three <= (n - 1); three++)
{
if (three == (n - 1))
{
printf("%d", a[three]);
}
else
{
printf("%d, ", a[three]);
}
}
printf("\n");
}
