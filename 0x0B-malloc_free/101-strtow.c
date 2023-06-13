#include <stdlib.h>
#include "main.h"

/**
 * count_word - THis function Counts The length of the
 * string.
 * @s: char Poniter that points to a variable
 * that is passed to this function which represent
 * A string to evaluate.
 * Return: Integer the number of word.
 */
int Firaol_count_word(char *s)
{
int two;
int one = 0, three = 0;

for (two = 0; s[two] != '\0'; two++)
{
if (s[two] == ' ')
{
one = 0;
}
else if (one == 0)
{
one = 1;
three++;
}
}

return (three);
}
/**
 * **strtow - THis function splits a string into word.
 * @str: char Poniter that points to a variable
 * that is passed to this function which represent
 * A string to split.
 *
 * Return: Char pointer an array of strings
 * or NULL.
 */
char **strtow(char *str)
{
char **one, *two;
int three, six, eight, nine;
int seven = 0, five = 0, ten = 0;

while (*(str + five))
five++;
six = Firaol_count_word(str);
if (six == 0)
return (NULL);
else
{
one = (char **)malloc(sizeof(char *) * (six + 1));
if (one == NULL)
return (NULL);
else
{
for (three = 0; three <= five; three++)
{
if (str[three] == ' ' || str[three] == '\0')
{
if (ten)
{
nine = three;
two = (char *)malloc(sizeof(char) * (ten + 1));
if (two == NULL)
return (NULL);
else
{
while (eight < nine)
{
*two++ = str[eight++];
}
*two = '\0';
one[seven] = two - ten;
seven++;
ten = 0;
}
}
}
else if (ten++ == 0)
eight = three;
}
one[seven] = NULL;
return (one);
}
}
}
