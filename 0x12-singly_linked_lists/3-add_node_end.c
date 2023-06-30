#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This Function adds a new node
 * at the end of a linked list.
 * @head: double pointer to the list_t list.
 * @str: string to put in the new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *five;
list_t *six = *head;
unsigned int seven = 0;

while (str[seven])
seven++;

five = malloc(sizeof(list_t));
if (!five)
return (NULL);

five->str = strdup(str);
five->len = seven;
five->next = NULL;

if (*head == NULL)
{
*head = five;
return (five);
}

while (six->next)
six = six->next;

six->next = five;

return (five);
}