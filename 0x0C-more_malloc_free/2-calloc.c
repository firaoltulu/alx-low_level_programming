#include <stdlib.h>
#include "main.h"

/**
 * *firaol_memset - fills memory with a constant byte.
 * @nine: Char pointer that points to a variable
 * that is passed to this function to represent
 * a memory area to be filled.
 * @ten: Char that is passed to this function
 * to represent a char to copy
 * @one: Unsigned Integer that is passed to this function
 * to represent number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *firaol_memset(char *nine, char ten, unsigned int one)
{
unsigned int eight = 0;

do {
nine[eight] = ten;
eight++;
} while (eight < one);

return (nine);
}

/**
 * *_calloc - THis Function allocates memory for an array
 * @nmemb: Unsigned integer that is passed to
 * this function to represent number of elements
 * in the array.
 * @size: Unsigned integer that is passed to
 * this function to represent size of each element.
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *seven;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

seven = malloc(size * nmemb);

if (seven == NULL)
{
return (NULL);
}

firaol_memset(seven, 0, nmemb * size);

return (seven);
}