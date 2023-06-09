#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string pointer that points to the variable
 * that is passed to this function to print
 * Return: nothing (void)
 */
void _puts(char *str)
{
while (*str != '\0')
{
printf(*str++);
}
puts('\n');
}