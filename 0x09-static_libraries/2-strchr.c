#include "main.h"
/**
 * _strchr - Entry point
 * @s: Char pointer that points to the variable
 * that is passed to this function
 * @c: Char pointer that points to the variable
 * that is passed to this function
 * Return: Char pointer that points the location
 */
char *_strchr(char *s, char c)
{
int four = 0;

for (; s[four] >= '\0'; four++)
{
if (s[four] == c)
return (&s[four]);
}
return (0);
}
