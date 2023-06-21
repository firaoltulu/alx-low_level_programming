#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - This Function Prints the result of simple operations.
 * @argc: Integer that passed to indicate The number
 * of arguments supplied to the program.
 * @argv: Char pointer that points to An array that is passed to
 * this program.
 *
 * Return: Integer 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int seven, eight;
char *nine;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
else
{

seven = atoi(argv[1]);
nine = argv[2];
eight = atoi(argv[3]);

if (get_op_func(nine) == NULL || nine[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*nine == '/' && eight == 0) || (*nine == '%' && eight == 0))
{
printf("Error\n");
exit(100);
}
else
{
printf("%d\n", get_op_func(nine)(seven, eight));
}

return (0);
}
}