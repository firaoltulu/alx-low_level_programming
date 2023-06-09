#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * Firaol_check_num - THis function check if the argument is
 * contains all is number digits
 * @seven: Char Pointer that points to the variable
 * that is passed to this function to represent
 * Array of arguments
 *
 * Return: Integer 0 (Success), 1 (Error)
 */
int Firaol_check_num(char *seven)
{

unsigned int six;

six = 0;
do {
if (!isdigit(seven[six]))
{
return (0);
}
six++;
} while (six < strlen(seven));
return (1);
}

/**
 * main - Entry function which calculates
 * the sum of the postive arguments
 * @argc: Integer that is passed to this function
 * to represent number of arguments
 * @argv: Char Pointer that points to the variable
 * that is passed to this function to represent
 * Array of arguments
 *
 * Return: Integer 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
int nine;
int ten = 1;
int eight = 0;

do {
int res = Firaol_check_num(argv[ten]);
if (res == 1)
{
nine = atoi(argv[ten]);
eight += nine;
}
else
{
printf("Error\n");
return (1);
}

ten++;
} while (ten < argc);

printf("%d\n", eight);

return (0);
}
