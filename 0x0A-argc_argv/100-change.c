#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry function which prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Integer that is passed to this function
 * to represent number of arguments
 * @argv: Char Pointer that points to the variable
 * that is passed to this function to represent
 * Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int one = atoi(argv[1]);
int two = 0;
int three = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (one < 0)
{
printf("0\n");
return (0);
}
do {
while (one >= coins[two])
{
three++;
one -= coins[two];
}
two++;
} while (two < 5 && one >= 0);

printf("%d\n", three);
return (0);
}
