#include "main.h"
/**
 * puts2 - function should print the even char in the string
 * @str: string pointer that points to the variable
 * that is passed to this function to print the even char in the string
 * Return: nothing (void)
 */
void puts2(char *str)
{
int six = 0;
int seven = 0;
char *eight = str;
int nine;

while (*eight != '\0')
{
eight++;
six++;
}
seven = six - 1;
for (nine = 0 ; nine <= seven ; nine++)
{
if (nine % 2 == 0)
{
putchar(str[nine]);
}
}
putchar('\n');
}
