#include "hash_tables.h"

/**
 * hash_table_print - This Function prints a hash table.
 * @ht: hash_table_t pointer that points to the
 * hash table to print
 *
 * Return: Nothing(Void).
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int one;
	hash_node_t *two;
	char three = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	else
	{
		printf("{");
		for (one = 0; one < ht->size; one++)
		{
			two = ht->array[one];
			while (two != NULL)
			{
				if (three == 1)
					printf(", ");
				printf("'%s': '%s'", two->key, two->value);
				three = 1;
				two = two->next;
			}
		}
		printf("}\n");
	}
}
