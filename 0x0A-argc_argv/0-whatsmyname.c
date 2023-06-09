#include <stdio.h>
#include "main.h"

/**
 * main - Entry function which prints the name of the program
 * @argc: Integer that is passed to this function
 * to represent number of arguments
 * @argv: Char Pointer that points to the variable
 * that is passed to this function to represent array
 * of arguments
 *
 * Return: Integer 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}