#include "lists.h"

/**
 * free_listint - This Function frees a
 * linked list.
 * @head: listint_t list to be freed.
 *
 * Return: Nothing (Void),
 */
void free_listint(listint_t *head)
{
listint_t *six;

while (head)
{
six = head->next;
free(head);
head = six;
}
}
