#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This Function returns
 * the number of elements in a linked list.
 * @h: pointer to the list_t list.
 *
 * Return: number of elements in list_t h.
 */
size_t list_len(const list_t *h)
{
size_t two = 0;

while (h)
{
two++;
two = h->next;
}
return (two);
}