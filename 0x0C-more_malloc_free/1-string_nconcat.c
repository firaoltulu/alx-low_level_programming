#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - THis Function concatenates
 * n bytes of a string to another string.
 * @s1: Char pointer that points to a variable
 * that is passed to this function to represent
 * a string to append to.
 * @s2:  Char pointer that points to a variable
 * that is passed to this function to represent
 * a string to concatenate from
 * @n: Unsigned Integer that is passed to this
 * function to represent a number of bytes from
 * s2 to concatenate to s1 concatenate.
 *
 * Return: Char pointer that points to the resulting
 * string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *two;
unsigned int three = 0, four = 0, five = 0, six = 0;

while (s1 && s1[five])
five++;
while (s2 && s2[six])
six++;
if (n < six)
{
two = malloc(sizeof(char) * (five + n + 1));
}
else
{
two = malloc(sizeof(char) * (five + six + 1));
}
if (!two)
{
return (NULL);
}
while (three < five)
{
two[three] = s1[three];
three++;
}
while (n < six && three < (five + n))
{
two[three++] = s2[four++];
}
while (n >= six && three < (five + six))
{
two[three++] = s2[four++];
}
two[three] = '\0';
return (two);
}