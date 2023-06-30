#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This Function adds a new node
 * at the beginning of a linked list.
 * @head: double pointer to the list_t list.
 * @str: new string to add in the node.
 *
 * Return: the address of the new element,
 * or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *three;
unsigned int four = 0;

while (str[four])
four++;

three = malloc(sizeof(list_t));
if (!three)
{
return (NULL);
}
else
{
three->str = strdup(str);
three->len = four;
three->next = (*head);
(*head) = three;
return (*head);
}
}