#include <stdio.h>
/**
 * fir_sum - adds the number that are divide able by 3 & 5 between 0 & 1024
 *
 * Return: the sum.
 */
int fir_sum(void)
{
int two = 0, sum = 0;

do {
if ((two % 3) == 0 || (two % 5) == 0)
sum += two;

two++;
} while (two < 1024);

return (sum);
}

/**
 * main - Entry function
 *
 * Return: 0.
 */

int main(void)
{
int sum = fir_sum();

printf("%d\n", sum);

return (0);
}
