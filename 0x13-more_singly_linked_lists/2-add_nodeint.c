#include "lists.h"

/**
 * add_nodeint - This Function adds a new node
 * at the beginning of a linked list.
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node.
 *
 * Return: pointer to the new node, or NULL if it
 * fails to allocate memory.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *three;

	three = malloc(sizeof(listint_t));
	if (!three)
	{
		return (NULL);
	}
	else
	{
		three->n = n;
		three->next = *head;
		*head = three;

		return (three);
	}
}
