#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: Integer array pointer that points to the variable
 * that is passed to this function to be converted to an integer
 *
 * Return: int converted from the string
 */
int _atoi(char *s)
{
int one = 0;
int two = 0;
int three = 0;
int four = 0;
int five = 0;
int six = 0;

while (s[four] != '\0')
{
four++;
}

for (; one < four && five == 0; one++)
{
/* code */
if (s[one] == '-')
++two;

if (s[one] >= '0' && s[one] <= '9')
{
six = s[one] - '0';
if (two % 2)
six = -six;
three = three * 10 + six;
five = 1;
if (s[one + 1] < '0' || s[one + 1] > '9')
break;
five = 0;
}
}
if (five == 0)
{
return (0);
}
else
{
return (three);
}
}