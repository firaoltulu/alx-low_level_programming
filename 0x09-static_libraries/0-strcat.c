#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Char pointer that points to the variable
 * that is passed to this function to be concatenate with
 * the src variable
 * @src: Char pointer that points to the variable
 * that is passed to this function to be concatenate with
 * the dest variable
 *
 * Return: Char pointer that contains the concatenated string
 */

char *_strcat(char *dest, char *src)
{
int one = 0;
int two = 0;

while (dest[one] != '\0')
{
one++;
}

while (src[two] != '\0')
{
dest[one] = src[two];
one++;
two++;
}

dest[one] = '\0';
return (dest);
}