#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: 0
 */

int main(void)
{
int Patience = 48;
do {
putchar(Patience);
if (Patience != 57)
{
putchar(',');
putchar(' ');
}
Patience++;
} while (Patience < 58);
putchar('\n');
return (0);
}
