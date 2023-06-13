#include "main.h"
#include <stdlib.h>
/**
 * str_concat - THis function concatenates two strings.
 * @s1: Char Poniter that points to a variable
 * that is passed to this function which represent
 * input one to concat
 * @s2: har Poniter that points to a variable
 * that is passed to this function which represent
 * input two to concat
 * Return: Char Pointer the concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *six;
int seven = 0;
int eight = 0;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

while (s1[seven] != '\0')
{
seven++;
}

while (s2[eight] != '\0')
{
eight++;
}

six = malloc(sizeof(char) * (seven + eight + 1));

if (six == NULL)
{
return (NULL);
}
else
{
seven = 0;
eight = 0;
while (s1[seven] != '\0')
{
six[seven] = s1[seven];
seven++;
}

while (s2[eight] != '\0')
{
six[seven] = s2[eight];
seven++, eight++;
}
six[seven] = '\0';
return (six);
}
}