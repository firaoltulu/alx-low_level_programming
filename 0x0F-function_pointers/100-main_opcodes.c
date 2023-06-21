#include <stdio.h>
#include <stdlib.h>

/**
 * main - This Function prints its own opcodes
 * @argc: Integer that passed to indicate The number
 * of arguments supplied to the program.
 * @argv: Char pointer that points to An array
 * that is passed to this program.
 *
 * Return: Integer 0 (Success)
 */
int main(int argc, char *argv[])
{
int one, two;
char *three;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
else
{
one = atoi(argv[1]);

if (one < 0)
{
printf("Error\n");
exit(2);
}
else
{

three = (char *)main;

for (two = 0; two < one; two++)
{
if (two == one - 1)
{
printf("%02hhx\n", three[two]);
break;
}
printf("%02hhx ", three[two]);
}
return (0);
}
}
}
