#include "lists.h"
#include <stdio.h>

size_t Firaol_looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * Firaol_looped_listint_len - This Function Counts
 * the number of unique nodes.
 * in a looped listint_t linked list.
 * @one: A pointer to the head of the
 * listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes
 * in the list.
 */
size_t Firaol_looped_listint_len(const listint_t *one)
{
	const listint_t *ten, *nine;
	size_t six = 1;

	if (one == NULL || one->next == NULL)
	{
		return (0);
	}
	else
	{
		ten = one->next;
		nine = (one->next)->next;
		while (nine)
		{
			if (ten == nine)
			{
				ten = one;
				while (ten != nine)
				{
					six++;
					ten = ten->next;
					nine = nine->next;
				}
				ten = ten->next;
				while (ten != nine)
				{
					six++;
					ten = ten->next;
				}
				return (six);
			}
			ten = ten->next;
			nine = (nine->next)->next;
		}
		return (0);
	}
}

/**
 * print_listint_safe - This Function Prints a
 * listint_t list safely.
 * @head: A pointer to the head of the
 * listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t seven, nine = 0;

	seven = Firaol_looped_listint_len(head);

	if (seven == 0)
	{
		for (; head != NULL; seven++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (nine = 0; nine < seven; nine++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (seven);
}
