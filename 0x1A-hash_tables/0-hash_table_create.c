#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - This Function creates a hash table.
 *
 * @size: int that contains the size of the array.
 *
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *one;
	unsigned long int two;

	one = malloc(sizeof(hash_table_t));
	if (one == NULL)
	{
		return (NULL);
	}
	else
	{
		one->size = size;
		one->array = malloc(size * sizeof(hash_node_t *));
		if (one->array == NULL)
		{
			free(one);
			return (NULL);
		}
		else
		{
			for (two = 0; two < size; two++)
				one->array[two] = NULL;
			return (one);
		}
	}
}
