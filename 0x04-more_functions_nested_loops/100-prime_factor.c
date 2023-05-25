#include <stdio.h>
#include <math.h>

/**
 * LargestnumberPrimeFactor - finds and prints
 * the largest prime factor of the number 612852475143
 *
 * @number: long long Integer type that accept
 * whos values is the one we trying to find the prime
 * factory
 *
 * Return: nothing (void)
 */
void LargestnumberPrimeFactor(long long int number)
{
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
printf("%lld\n", one);
}

/**
 * main - Entry Function
 *
 * Return: 0
 */
int main(void)
{
long long int one = 612852475143;
LargestnumberPrimeFactor(one);
}
