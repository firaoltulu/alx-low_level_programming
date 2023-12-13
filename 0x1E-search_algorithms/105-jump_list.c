#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 * linked list of integers using jump search.
 *
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of node in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, two;
	listint_t *three, *four;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		step = 0;
		two = sqrt(size);
		for (three = four = list; four->index + 1 < size && four->n < value;)
		{
			three = four;
			for (step += two; four->index < step; four = four->next)
			{
				if (four->index + 1 == size)
					break;
			}
			printf("Value checked at index [%ld] = [%d]\n", four->index, four->n);
		}

		printf("Value found between indexes [%ld] and [%ld]\n",
				three->index, four->index);

		for (; three->index < four->index && three->n < value; three = three->next)
			printf("Value checked at index [%ld] = [%d]\n", three->index, three->n);
		printf("Value checked at index [%ld] = [%d]\n", three->index, three->n);

		return (three->n == value ? three : NULL);
	}
}
