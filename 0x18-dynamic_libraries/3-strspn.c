#include "main.h"
/**
 * _strspn - Entry point
 * @s:Char pointer that points to the variable
 * that is passed to this function
 * @accept: Char pointer that points to the variable
 * that is passed to this function
 * Return: unsigned int the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int five = 0;
int six;

while (*s)
{
six = 0;
do {
if (*s == accept[six])
{
five++;
break;
}
else if (accept[six + 1] == '\0')
return (five);

six++;
} while (accept[six]);
s++;
}
return (five);
}
