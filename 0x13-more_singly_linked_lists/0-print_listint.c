#include "lists.h"

/**
 * print_listint - This Function prints all
 * the elements of a linked list.
 * @h: Pointer That points to linked list
 * of type listint_t to print.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t one = 0;

	while (h)
	{
		printf("%d\n", h->n);
		one++;
		h = h->next;
	}

	return (one);
}
