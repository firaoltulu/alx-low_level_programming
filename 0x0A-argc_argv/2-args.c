#include <stdio.h>
#include "main.h"

/**
 * main - Entry function which prints all arguments it receives
 * @argc:Integer that is passed to this function
 * to represent number of arguments
 * @argv: Char Pointer that points to the variable
 * that is passed to this function to represent
 * Array of arguments
 *
 * Return: Integer 0 (Success)
 */
int main(int argc, char *argv[])
{
int one;
int two = argc;

for (one = 0; one < two; one++)
{
printf("%s\n", argv[one]);
}

return (0);
}
