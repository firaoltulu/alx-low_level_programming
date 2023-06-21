#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - This Function executes a
 * function given as a parameter on each element
 * of an array.
 * @array: Integer Pointer That Points to a array
 * that contains a element the action is based on
 * to execute.
 * @size: size_t type to indicate how many element
 * to print.
 * @action: Pointer That Points to a action to execute
 * on each array element.
 * Return: Nothing (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int one = 0;

if (array == NULL || action == NULL)
{
return;
}

while (one < size)
{
action(array[one]);
one++;
}
}
