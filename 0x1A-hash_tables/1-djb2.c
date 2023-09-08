#include "hash_tables.h"

/**
 * hash_djb2 - This Function implementation
 * of the djb2 algorithm.
 * @str: Char pointer that points to the
 * string used to generate hash value.
 *
 * Return: hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c;
    }
    return (hash);
}
