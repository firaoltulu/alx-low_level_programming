#include "main.h"
#include <stdlib.h>
/**
 * create_array - THis function creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int passed to this function
 * to represent a size of array.
 * @c: Char passed to this function
 * to represent a char to assign.
 * Return: Char pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *one;
unsigned int two = 0;

one = malloc(sizeof(char) * size);
if (size == 0 || one == NULL)
{
return (NULL);
}

do {
/* code */
one[two] = c;
two++;
} while (two < size);

return (one);
}