#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This Function frees
 * a linked list.
 * @head: list_t list to be freed.
 */

void free_list(list_t *head)
{
list_t *eight;

while (head)
{
eight = head->next;
free(head->str);
free(head);
head = eight;
}
}