#include "lists.h"

/**
 * sum_listint - This Function calculates
 * the sum of all the data in a listint_t
 * list.
 * @head: first node in the linked list.
 *
 * Return: resulting sum.
 */
int sum_listint(listint_t *head)
{
int two = 0;
listint_t *three = head;

while (three)
{
two += three->n;
three = three->next;
}

return (two);
}
