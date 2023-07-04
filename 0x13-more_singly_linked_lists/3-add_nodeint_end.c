#include "lists.h"

/**
 * add_nodeint_end - this Function adds
 * a node at the end of a linked list.
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element.
 *
 * Return: pointer to the new node,
 * or NULL if it fails to allocate memory.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *four;
	listint_t *five = *head;

	four = malloc(sizeof(listint_t));
	if (!four)
	{
		return (NULL);
	}
	else
	{
		four->n = n;
		four->next = NULL;

		if (*head == NULL)
		{
			*head = four;
			return (four);
		}
		else
		{
			while (five->next)
				five = five->next;

			five->next = four;

			return (four);
		}
	}
}
