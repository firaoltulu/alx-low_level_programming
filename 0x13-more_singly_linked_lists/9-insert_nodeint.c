#include "lists.h"

/**
 * insert_nodeint_at_index - THis Function inserts
 * a new node in a linked list at a given position.
 *
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 * if it fails to allocate memory.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int four;
listint_t *five;
listint_t *six = *head;

five = malloc(sizeof(listint_t));
if (!five || !head)
return (NULL);

five->n = n;
five->next = NULL;

if (idx == 0)
{
five->next = *head;
*head = five;
return (five);
}

for (four = 0; six && four < idx; four++)
{
if (four == idx - 1)
{
five->next = six->next;
six->next = five;
return (five);
}
else
six = six->next;
}

return (NULL);
}
