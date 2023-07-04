#include "lists.h"

/**
 * find_listint_loop - This Function finds
 * the loop in a linked list.
 * @head: linked list to search for.
 *
 * Return: address of the node where the
 * loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *two = head;
listint_t *six = head;

if (!head)
{
return (NULL);
}
else
{
while (two && six && six->next)
{
six = six->next->next;
two = two->next;
if (six == two)
{
two = head;
while (two != six)
{
two = two->next;
six = six->next;
}
return (six);
}
}

return (NULL);
}
}
