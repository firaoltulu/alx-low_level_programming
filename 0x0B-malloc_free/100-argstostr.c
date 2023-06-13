#include "main.h"
#include <stdlib.h>
/**
 * argstostr - THis function concatenates all the
 * arguments of your program.
 * @ac: Integer that is passed to this function
 * which represent int input
 * @av: char Poniter that points to a variable
 * that is passed to this function which represent
 * A string to be concatenate.
 * Return: Char Pointer.
 */
char *argstostr(int ac, char **av)
{
int one, two;
int three = 0, four = 0;
char *five;

if (ac == 0 || av == NULL)
{
return (NULL);
}
else
{
for (one = 0; one < ac; one++)
{
for (two = 0; av[one][two]; two++)
{
four++;
}
}
four += ac;

five = malloc(sizeof(char) * four + 1);

if (five == NULL)
{
return (NULL);
}
else
{
for (one = 0; one < ac; one++)
{
for (two = 0; av[one][two]; two++)
{
five[three] = av[one][two];
three++;
}
if (five[three] == '\0')
{
five[three++] = '\n';
}
}
return (five);
}
}
}