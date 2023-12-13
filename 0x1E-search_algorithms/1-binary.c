#include "search_algos.h"

/**
 * binary_search - This Function Searches for a value
 * in a sorted array of integers using binary search.
 *
 * @array: Int pointer points to the first element
 * of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, two, three;

    if (array == NULL)
    {
        return (-1);
    }
    else
    {
        for (two = 0, three = size - 1; three >= two;)
        {
            printf("Searching in array: ");
            for (i = two; i < three; i++)
            {
                printf("%d, ", array[i]);
            }
            printf("%d\n", array[i]);

            i = two + (three - two) / 2;
            if (array[i] == value)
                return (i);
            if (array[i] > value)
                three = i - 1;
            else
                two = i + 1;
        }

        return (-1);
    }
}