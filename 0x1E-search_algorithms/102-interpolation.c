#include "search_algos.h"

/**
 * interpolation_search - This Function
 * Searches for a value in a sorted array of
 * integers using interpolation search.
 *
 * @array: int pointer points to the first
 * element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located.
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t i, one, two;

    if (array == NULL)
    {
        return (-1);
    }
    else
    {
        for (one = 0, two = size - 1; two >= one;)
        {
            i = one + (((double)(two - one) / (array[two] - array[one])) * (value - array[one]));
            if (i < size)
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            else
            {
                printf("Value checked array[%ld] is out of range\n", i);
                break;
            }

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