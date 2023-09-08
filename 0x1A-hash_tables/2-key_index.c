#include "hash_tables.h"

/**
 * key_index - This function gives the index of a key.
 * @key: char pointer that points to the
 * key to get index for.
 * @size: int that contains the size of the hash table.
 *
 * Return: index for the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
