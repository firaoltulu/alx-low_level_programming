#include "lists.h"

/**
 * delete_nodeint_at_index - This Function deletes
 * a node in a linked list at a certain index.
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (If it Success), or -1 (If it Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nine = *head;
	listint_t *ten = NULL;
	unsigned int six = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nine);
		return (1);
	}

	while (six < index - 1)
	{
		if (!nine || !(nine->next))
			return (-1);
		nine = nine->next;
		six++;
	}

	ten = nine->next;
	nine->next = ten->next;
	free(ten);

	return (1);
}
