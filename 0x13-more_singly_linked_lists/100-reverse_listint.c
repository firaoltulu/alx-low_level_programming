#include "lists.h"

/**
 * reverse_listint - This Function reverses a
 * linked list.
 * @head: pointer to the first node in the list.
 *
 * Return: pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *seven = NULL;
	listint_t *ten = NULL;

	while (*head)
	{
		ten = (*head)->next;
		(*head)->next = seven;
		seven = *head;
		*head = ten;
	}

	*head = seven;

	return (*head);
}
