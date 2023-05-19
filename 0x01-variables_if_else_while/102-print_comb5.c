#include <stdio.h>

/**
 * main - Entry Function
 * Return: 0
 */
int main(void)
{
int four = 0, five;
do {
for (five = 0; five < 100; five++)
{
if (four < five)
{
putchar((four / 10) + 48);
putchar((four % 10) + 48);
putchar(' ');
putchar((five / 10) + 48);
putchar((five % 10) + 48);
if (four != 98 || five != 99)
{
putchar(',');
putchar(' ');
}
}
}
four++;
} while (four < 100);
putchar('\n');
return (0);
}
