#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: 0.
 */

int main(void)
{
int i;
unsigned long three = 0, four = 1;
unsigned long five;

for (i = 0; i < 50; i++)
{
five = three + four;
printf("%lu", five);

three = four;
four = five;

if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
