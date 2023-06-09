#include "main.h"
/**
 * _strncat - This function appends the first string
 * to the second strings
 * using at most n bytes from src
 * @dest: Char pointer that points to the variable
 * that is passed to this function to be concatenate with
 * the src variable
 * @src: Char pointer that points to the variable
 * that is passed to this function to be concatenate with
 * the dest variable
 * @n: integer used to indicate the amount to copy
 *
 * Return: Char pointer that contains the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int three = 0;
int four = 0;

while (dest[three] != '\0')
{
three++;
}
while (four < n && src[four] != '\0')
{
dest[three] = src[four];
three++;
four++;
}
dest[three] = '\0';
return (dest);
}