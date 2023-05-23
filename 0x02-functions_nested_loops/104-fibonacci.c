#include <stdio.h>

/**
 * main - Entry function
 *
 * author: firaol tulu
 *
 * Return: 0
 */

int main(void)
{
unsigned long int three = 2;
unsigned long int seven;
unsigned long int four = 1000000000;
unsigned long int five;
unsigned long int eight;
unsigned long int one;
unsigned long int two = 1;
unsigned long int six;


printf("%lu", two);

for (one = 1; one < 91; one++)
{
printf(", %lu", three);
three += two;
two = three - two;
}

five = (two / four);
six = (two % four);
seven = (three / four);
eight = (three % four);

for (one = 92; one < 99; ++one)
{
printf(", %lu", seven + (eight / four));
printf("%lu", eight % four);
seven = seven + five;
five = seven - five;
eight = eight + six;
six = eight - six;
}

printf("\n");

return (0);

}
