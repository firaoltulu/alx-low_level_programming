#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string pointer that points to the variable
 * that is passed to this function to print the last half char in the string
 * Return: nothing (void)
 */
void puts_half(char *str)
{
int ten;
int one;
int two;

two = 0;

for (ten = 0; str[ten] != '\0'; ten++)
{
two++;
}

if ((two % 2) == 1)
{
one = ((two + 1) / 2);
}
else
{
one = (two / 2);
}

for (ten = one; str[ten] != '\0'; ten++)
{
putchar(str[ten]);
}
putchar('\n');
}
