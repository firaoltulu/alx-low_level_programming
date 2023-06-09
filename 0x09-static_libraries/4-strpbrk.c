#include "main.h"
/**
 * _strpbrk - Entry point
 * @s:Char pointer that points to the variable
 * that is passed to this function
 * @accept: Char pointer that points to the variable
 * that is passed to this function
 * Return: Char pointer finding a string for any of a
 * set of bytes.
 */
char *_strpbrk(char *s, char *accept)
{
int seven;

while (*s)
{
seven = 0;
do {
if (*s == accept[seven])
return (s);
seven++;
} while (accept[seven]);

s++;
}

return ('\0');
}
