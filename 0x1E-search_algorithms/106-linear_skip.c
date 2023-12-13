#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 * linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *three, *four;

    if (list == NULL)
    {
        return (NULL);
    }
    else
    {
        for (three = four = list; four->next != NULL && four->n < value;)
        {
            three = four;
            if (four->express != NULL)
            {
                four = four->express;
                printf("Value checked at index [%ld] = [%d]\n",
                       four->index, four->n);
            }
            else
            {
                while (four->next != NULL)
                    four = four->next;
            }
        }

        printf("Value found between indexes [%ld] and [%ld]\n",
               three->index, four->index);

        for (; three->index < four->index && three->n < value; three = three->next)
            printf("Value checked at index [%ld] = [%d]\n", three->index, three->n);
        printf("Value checked at index [%ld] = [%d]\n", three->index, three->n);

        return (three->n == value ? three : NULL);
    }
}