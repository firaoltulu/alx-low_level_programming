#include "hash_tables.h"

/**
 * Custom_local_make_hash_node - This Function creates a new hash node.
 * @two: char pointer that points to the key for the node.
 * @three: char pointer that points to the for the node.
 *
 * Return: the new node, or NULL on failure.
 */
hash_node_t *Custom_local_make_hash_node(const char *two, const char *three)
{
	hash_node_t *one;

	one = malloc(sizeof(hash_node_t));
	if (one == NULL)
	{
		return (NULL);
	}
	else
	{
		one->key = strdup(two);
		if (one->key == NULL)
		{
			free(one);
			return (NULL);
		}
		one->value = strdup(three);
		if (one->value == NULL)
		{
			free(one->key);
			free(one);
			return (NULL);
		}
		one->next = NULL;
		return (one);
	}
}

/**
 * hash_table_set - This Function sets a key
 * to a value in the hash table.
 * @ht: char pointer that points to the hash
 * table to add element to.
 * @key: char pointer that points to the
 * key for the data.
 * @value: char pointer that points to the
 * data to store.
 *
 * Return: Int 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int one;
	hash_node_t *two, *three;
	char *four;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	else
	{
		one = key_index((const unsigned char *)key, ht->size);
		three = ht->array[one];
		while (three != NULL)
		{
			if (strcmp(three->key, key) == 0)
			{
				four = strdup(value);
				if (four == NULL)
				{
					return (0);
				}
				else
				{
					free(three->value);
					three->value = four;
					return (1);
				}
			}
			three = three->next;
		}
		two = Custom_local_make_hash_node(key, value);
		if (two == NULL)
		{
			return (0);
		}
		else
		{
			two->next = ht->array[one];
			ht->array[one] = two;
			return (1);
		}
	}
}
