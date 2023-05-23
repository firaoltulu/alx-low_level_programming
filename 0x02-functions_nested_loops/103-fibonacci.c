#include <stdio.h>

/**
 * fir_sum - Calculate the sum of the even-valued terms
 * of fibonacci number
 *
 * Return: sum
 */
int fir_sum(void)
{
int ind;
unsigned long int ten = 1, nine = 2;
unsigned long int next, sum = 0;

for (ind = 1; ind <= 33; ++ind)
{
if (ten < 4000000 && (ten % 2) == 0)
{
sum = sum + ten;
}
next = ten + nine;
ten = nine;
nine = next;
}
return (sum);
}

/**
 * main - Entry function
 *
 * Return: 0
 */

int main(void)
{

int sum = fir_sum();

printf("%lu\n", sum);

return (0);
}
