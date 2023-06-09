#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: Char pointer that points to the variable
 * that is passed to this function to be coped from
 * the src variable
 * @src: Char pointer that points to the variable
 * that is passed to this function to be coped to
 * the dest variable
 * @n: integer used to indicate the amount to copy
 *
 * Return: Char pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int four = 0;

for ( ; four < n && src[four] != '\0'; four++)
dest[four] = src[four];


while (four < n)
{
dest[four] = '\0';
four++;
}

return (dest);
}
