#include "function_pointers.h"
/**
 * int_index - This Function that return
 * index place if comparison = true, else -1.
 * @array: Integer Pointer That Points to a array
 * that contains a element to be compared by cmp.
 * @size: Integer that is passed to indicate the
 * size of elements in array.
 * @cmp: pointer to function to be used on each element
 * of the array.
 * Return: Integer 0 (Success).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int two = 0;

if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}

while (two < size)
{
if (cmp(array[two]))
{
return (two);
}
two++;
}
return (-1);
}
