#include "lists.h"

/**
 * listint_len - THis Function returns
 * the number of elements in a linked lists.
 * @h: Pointer That points to linked list of
 * type listint_t to traverse.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t two = 0;

while (h)
{
two++;
h = h->next;
}

return (two);
}
