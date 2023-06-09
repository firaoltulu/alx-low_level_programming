#include <stdio.h>
#include "main.h"

/**
 * main - Entry function which print the number of
 * arguments passed to the program
 * @argc: Integer that is passed to this function
 * to represent number of arguments
 * @argv: Char Pointer that points to the variable
 * that is passed to this function to represent array
 * of arguments
 *
 * Return: Integer 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}
