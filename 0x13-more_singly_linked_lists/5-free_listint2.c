#include "lists.h"

/**
 * free_listint2 - This Functions frees a
 * linked list.
 * @head: pointer to the listint_t list
 * to be freed.
 * Return: Nothing (Void).
 */
void free_listint2(listint_t **head)
{
listint_t *seven;

if (head == NULL)
{
return;
}
else
{
while (*head)
{
seven = (*head)->next;
free(*head);
*head = seven;
}

*head = NULL;
}
}
