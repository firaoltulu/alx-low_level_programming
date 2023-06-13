#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry function which multiplies two numbers
 * @argc: Integer that is passed to this function
 * to represent number of arguments
 * @argv: Char Pointer that points to the variable
 * that is passed to this function to represent Array of arguments
 *
 * Return: Integer 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int two, three, four;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
three = atoi(argv[1]);
four = atoi(argv[2]);
two = three *four;

printf("%d\n", two);

return (0);
}