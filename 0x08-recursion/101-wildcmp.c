#include "main.h"

/**
 * wildcmp - THis function Compare strings
 * @s1:  Char pointer that points to the variable
 * that is passed to this function which represent
 * the pointer to string params
 * @s2:  Char pointer that points to the variable
 * that is passed to this function which represent
 * the pointer to string params
 * Return: integer 1 if the strings can be considered identical,
 * otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
char **one = &s1;
char **two = &s2;

if (**one == '\0')
{
if (**two != '\0' && **two == '*')
{
return (wildcmp(*one, *two + 1));
}
return (**two == '\0');
}

if (**two == '*')
{
return (wildcmp(*one + 1, *two) || wildcmp(*one, *two + 1));
}
else if (**one == **two)
{
return (wildcmp(*one + 1, *two + 1));
}
return (0);
}
