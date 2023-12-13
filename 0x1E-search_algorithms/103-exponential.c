#include "search_algos.h"

/**
 * Local__binary_search - Searches for a value in a sorted array
 * of integers using binary search.
 *
 * @array: A pointer to the first element of the array to search.
 * @one: The starting index of the [sub]array to search.
 * @two: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int Local__binary_search(int *array, size_t one, size_t two, int value)
{
    size_t i;

    if (array == NULL)
    {
        return (-1);
    }
    else
    {
        while (two >= one)
        {
            printf("Searching in array: ");
            for (i = one; i < two; i++)
                printf("%d, ", array[i]);
            printf("%d\n", array[i]);

            i = one + (two - one) / 2;
            if (array[i] == value)
                return (i);
            if (array[i] > value)
                two = i - 1;
            else
                one = i + 1;
        }

        return (-1);
    }
}

/**
 * exponential_search - This Function Searches for a value
 * in a sorted array of integers using exponential search.
 *
 * @array: A pointer points to the first element of the
 * array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 *
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t i = 0, one;

    if (array == NULL)
    {
        return (-1);
    }
    else
    {
        if (array[0] != value)
        {
            for (i = 1; i < size && array[i] <= value; i = i * 2)
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        }
        else
        {
            one = i < size ? i : size - 1;
            printf("Value found between indexes [%ld] and [%ld]\n", i / 2, one);
            return (Local__binary_search(array, i / 2, one, value));
        }
    }
}