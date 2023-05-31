#include "main.h"
/**
 * reverse_array - this reverse array of integers in a
 * variable
 * @a: Integer pointer that points to the variable
 * that is passed to this function to be reversed
 * @n: number of elements of array
 *
 * Return: nothing (void)
 */
void reverse_array(int *a, int n)
{
int six;
int seven;

for (six = 0; six < n--; six++)
{
seven = a[six];
a[six] = a[n];
a[n] = seven;
}
}
