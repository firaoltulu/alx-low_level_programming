#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - THis Function copy of the
 * string given as a parameter.
 * @str: char Poniter that points to a variable
 * that is passed to this function used for to copy its
 * value.
 * Return: Char pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
char *three;
int four = 0;
int five = 0;

if (str == NULL)
return (NULL);

while (str[four] != '\0')
{
four++;
}
if (four <= 0)
return (NULL);

three = malloc(sizeof(char) * (four + 1));

if (three == NULL)
{
return (NULL);
}
do {
three[five] = str[five];
five++;
} while (str[five]);

return (three);
}