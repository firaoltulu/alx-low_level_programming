#include "hash_tables.h"

/**
 * hash_table_delete - This Function deletes a hash table.
 * @ht: hash_table_t pointer that points to the
 * hash table to delete.
 *
 * Return: Nothing(Void).
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int one;
    hash_node_t *two;

    if (ht == NULL || ht->array == NULL || ht->size == 0)
    {
        return;
    }
    else
    {
        for (one = 0; one < ht->size; one++)
        {
            while (ht->array[one] != NULL)
            {
                two = ht->array[one]->next;
                free(ht->array[one]->key);
                free(ht->array[one]->value);
                free(ht->array[one]);
                ht->array[one] = two;
            }
        }
        free(ht->array);
        ht->array = NULL;
        ht->size = 0;
        free(ht);
    }
}
