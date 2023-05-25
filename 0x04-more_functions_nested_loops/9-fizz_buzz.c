#include "main.h"
#include <stdio.h>

/**
 * main - Entry Function that prints the numbers from 1 to 100
 * but for numbers thats modules of three is Zero prints Fizz
 * and for numbers thats modules of five is Zero prints Buzz
 * and for numbers thats modules of five and three is Zero prints FizzBuzz
 * Return: 0
 */
int main(void)
{
int ten = 1;

do {
if (ten % 3 == 0 && ten % 5 == 0)
{
printf(" FizzBuzz");
}
else if (ten % 3 == 0 && ten % 5 != 0)
{
printf(" Fizz");
}
else if (ten == 1)
{
printf("%d", ten);
}
else if (ten % 5 == 0 && ten % 3 != 0)
{
printf(" Buzz");
}
else
{
printf(" %d", ten);
}
ten++;
} while (ten <= 100);

printf("\n");

return (0);
}
