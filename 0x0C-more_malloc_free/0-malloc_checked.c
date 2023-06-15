#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - THis Fuction allocates memory using malloc
 * @b: Unsigned Integer passed to this function to represent
 * number of bytes to allocate.
 * Return: Any type of pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *one;

one = malloc(b);

if (one == NULL)
exit(98);

return (one);
}