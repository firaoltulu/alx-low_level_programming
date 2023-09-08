#include "hash_tables.h"

/**
 * hash_table_get - This Function retrieves a
 * value associated with a key.
 * @ht: hash_table_t pointer that points to the
 * table to retrieve value from
 * @key: Char pointer that points to the key
 * to find value
 *
 * Return: value associated with key, or
 * NULL if key cannot be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int one;
    hash_node_t *two;

    if (ht == NULL || ht->array == NULL || ht->size == 0 ||
        key == NULL || strlen(key) == 0)
    {
        return (NULL);
    }
    else
    {
        one = key_index((const unsigned char *)key, ht->size);
        two = ht->array[one];
        while (two != NULL)
        {
            if (strcmp(two->key, key) == 0)
                return (two->value);
            two = two->next;
        }
        return (NULL);
    }
}
