#include "hash_tables.h"

/**
 * shash_table_create - This function creates a sorted hash table.
 * @size: Int that contains the size of the hash table.
 *
 * Return: pointer to the new table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *one;
    unsigned long int two;

    one = malloc(sizeof(shash_table_t));
    if (one == NULL)
    {
        return (NULL);
    }
    else
    {
        one->size = size;
        one->shead = NULL;
        one->stail = NULL;
        one->array = malloc(sizeof(shash_node_t) * size);
        if (one->array == NULL)
        {
            free(one);
            return (NULL);
        }
        for (two = 0; two < size; two++)
        {
            one->array[two] = NULL;
        }
        return (one);
    }
}

/**
 * make_shash_node - This Function makes a
 * node for the sorted hash table.
 * @key: Char pointer that points to the key
 * for the data.
 * @value: Char pointer that points to the
 * data to be stored
 *
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
    shash_node_t *one;

    one = malloc(sizeof(shash_node_t));
    if (one == NULL)
    {
        return (NULL);
    }
    else
    {
        one->key = strdup(key);
        if (one->key == NULL)
        {
            free(one);
            return (NULL);
        }
        one->value = strdup(value);
        if (one->value == NULL)
        {
            free(one->key);
            free(one);
            return (NULL);
        }
        one->next = one->snext = one->sprev = NULL;
        return (one);
    }
}

/**
 * add_to_sorted_list - This Function add a node to the
 * sorted (by key's ASCII) linked list.
 *
 * @table: shash_table_t pointer that points to
 * the sorted hash table.
 * @node: shash_table_t pointer that points to
 * the node to add.
 *
 * Return: Nothing(Void).
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
    shash_node_t *one;

    if (table->shead == NULL && table->stail == NULL)
    {
        table->shead = table->stail = node;
        return;
    }
    else
    {
        one = table->shead;
        while (one != NULL)
        {
            if (strcmp(node->key, one->key) < 0)
            {
                node->snext = one;
                node->sprev = one->sprev;
                one->sprev = node;
                if (node->sprev != NULL)
                    node->sprev->snext = node;
                else
                    table->shead = node;
                return;
            }
            one = one->snext;
        }
        node->sprev = table->stail;
        table->stail->snext = node;
        table->stail = node;
    }
}

/**
 * shash_table_set - This Function sets a key to a
 * value in the hash table.
 * @ht: shash_table_t pointer that points to the
 * sorted hash table
 * @key: shash_table_t pointer that points to the
 * key to the data
 * @value: char pointer that points to the data to add.
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int one;
    char *two;
    shash_node_t *three, *four;

    if (ht == NULL || ht->array == NULL || ht->size == 0 ||
        key == NULL || strlen(key) == 0 || value == NULL)
    {
        return (0);
    }
    else
    {
        one = key_index((const unsigned char *)key, ht->size);
        four = ht->array[one];
        while (four != NULL)
        {
            if (strcmp(four->key, key) == 0)
            {
                two = strdup(value);
                if (two == NULL)
                {
                    return (0);
                }
                else
                {
                    free(four->value);
                    four->value = two;
                    return (1);
                }
            }
            four = four->next;
        }
        three = make_shash_node(key, value);
        if (three == NULL)
        {
            return (0);
        }
        else
        {
            three->next = ht->array[one];
            ht->array[one] = three;
            add_to_sorted_list(ht, three);
            return (1);
        }
    }
}

/**
 * shash_table_get - This Function retrieve a value from
 * the hash table.
 * @ht: shash_table_t pointer that points to the hash table.
 * @key: Char pointer that points to the key to the data.
 *
 * Return: the value associated with key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int one;
    shash_node_t *two;

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

/**
 * shash_table_print - This function prints a sorted hash table.
 * @ht: shash_table_t pointer that points to the
 * hash table to print
 *
 * Return: Nothing(Void).
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *one;
    char two = 0;

    if (ht == NULL || ht->array == NULL)
    {
        return;
    }
    else
    {
        printf("{");
        one = ht->shead;
        while (one != NULL)
        {
            if (two == 1)
                printf(", ");
            printf("'%s': '%s'", one->key, one->value);
            two = 1;
            one = one->snext;
        }
        printf("}\n");
    }
}

/**
 * shash_table_print_rev - This function prints a sorted
 * hash table in reverse
 * @ht: shash_table_t pointer that points to the
 * hash table to print
 *
 * Return: Nothing(Void).
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *one;
    char two = 0;

    if (ht == NULL || ht->array == NULL)
    {
        return;
    }
    else
    {
        printf("{");
        one = ht->stail;
        while (one != NULL)
        {
            if (two == 1)
                printf(", ");
            printf("'%s': '%s'", one->key, one->value);
            two = 1;
            one = one->sprev;
        }
        printf("}\n");
    }
}

/**
 * shash_table_delete - This Fnuction deletes
 * a sorted hash table.
 * @ht: shash_table_t pointer that points to
 * the hash table to delete.
 *
 * Return: Nothing(Void).
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int one;
    shash_node_t *two;

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
        ht->shead = ht->stail = NULL;
        ht->size = 0;
        free(ht);
    }
}
