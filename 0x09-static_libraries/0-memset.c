#include "main.h"
/**
 * _memset - THis function fill a block of memory with a specific value
 * @s: Char pointer that points to the variable
 * that is passed to this function starting address of
 * memory to be filled.
 * @b: Char that is passed to this function to be the desired value.
 * @n:  unsigned int that is passed to this function 
 * number of bytes to be changed.
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int one = 0;

for (; n > 0; one++)
{
s[one] = b;
n--;
}
return (s);
}