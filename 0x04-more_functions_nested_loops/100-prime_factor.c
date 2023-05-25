#include <stdio.h>
#include <math.h>

/**
 * main - Entry Function
 *
 * Return: 0
 */
int main(void)
{
long long int number = 612852475143;
long long int two = 2;
long long int one = 0;

while (number != 1)
{
if (number % two == 0)
{
while (number % two == 0)
{
number /= two;
}
one = two;
}
two++;
}
printf("%lld", one);
printf("\n");
return (0);
}
