#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - This Function print a
 * name using pointer to function.
 * @name: Char Pointer that points to a
 * string to add.
 * @f: Void pointer that points to function
 * Return: nothing (Void).
 **/
void print_name(char *name, void (*f)(char *))
{
char *locone = name;
if (locone == NULL || f == NULL)
{
return;
}

f(locone);
}
