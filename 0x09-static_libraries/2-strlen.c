#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string pointer that points to the variable
 * that is passed to this function
 * Return: the length of the string argument
 */
int _strlen(char *s)
{
int two;

two = 0;
while (*s != '\0')
{
two++;
s++;
}

return (two);
}