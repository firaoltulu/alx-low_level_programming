#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: Char pointer that points to the variable
 * that is passed to this function to be compared to
 * the s2 variable
 * @s2: Char pointer that points to the variable
 * that is passed to this function to be compared to
 * the s1 variable
 *
 * Return: Integer s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int five = 0;

while (s1[five] != '\0' && s2[five] != '\0')
{
if (s1[five] != s2[five])
{
return (s1[five] - s2[five]);
}
five++;
}
return (0);
}
