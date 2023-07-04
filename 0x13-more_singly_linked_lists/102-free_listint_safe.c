#include "lists.h"

/**
 * free_listint_safe - This Function frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nine = 0;
	int one;
	listint_t *two;

	if (!h || !*h)
	{
		return (0);
	}
	else
	{
		while (*h)
		{
			one = *h - (*h)->next;
			if (one > 0)
			{
				two = (*h)->next;
				free(*h);
				*h = two;
				nine++;
			}
			else
			{
				free(*h);
				*h = NULL;
				nine++;
				break;
			}
		}

		*h = NULL;

		return (nine);
	}
}
