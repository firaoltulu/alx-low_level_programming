#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer that points to a variable of any type
 * that is passed to this function to represent.
 * a pointer to the memory previsouly allocated by malloc.
 * @old_size: Integer that is passed to this function
 * to represent size of the allocated memory for ptr.
 * @new_size: unsigned Integer that is passed to this
 * function to represent new size of the new memory block.
 *
 * Return: pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *five;
char *six;
unsigned int seven = 0;

if (new_size == old_size)
return (ptr);
else if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
else if (!ptr)
return (malloc(new_size));
five = malloc(new_size);
if (!five)
return (NULL);
else
{
six = ptr;
if (new_size < old_size)
{
while (seven < new_size)
{
five[seven] = six[seven];
seven++;
}
}
else if (new_size > old_size)
{
for (seven = 0; seven < old_size; seven++)
{
five[seven] = six[seven];
}
}
free(ptr);
return (five);
}
}
