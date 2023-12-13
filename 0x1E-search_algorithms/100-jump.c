#include "search_algos.h"

/**
 * jump_search - This Function Searches for a value in a sorted array
 * of integers using jump search.
 * @array: Int pointer points to the first element of
 * the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located.
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, two, three;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	else
	{
		three = sqrt(size);
		for (i = two = 0; two < size && array[two] < value;)
		{
			printf("Value checked array[%ld] = [%d]\n", two, array[two]);
			i = two;
			two += three;
		}

		printf("Value found between indexes [%ld] and [%ld]\n", i, two);

		two = two < size - 1 ? two : size - 1;
		for (; i < two && array[i] < value; i++)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		return (array[i] == value ? (int)i : -1);
	}
}
