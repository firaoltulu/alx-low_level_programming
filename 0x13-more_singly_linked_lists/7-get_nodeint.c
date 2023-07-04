#include "lists.h"

/**
 * get_nodeint_at_index - this Fnction returns the
 * node at a certain index in a linked list.
 * @head: first node in the linked list.
 * @index: index of the node to return.
 *
 * Return: pointer to the node we're
 * looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ten = 0;
	listint_t *one = head;

	while (one && ten < index)
	{
		one = one->next;
		ten++;
	}

	return (one ? one : NULL);
}
