#include <stdio.h>

/*
 * main - entry function
 * Return: 0
 */

int main(void)
{
int one, two, three;

for (one = 48; one < 58; one++)
{
for (two = 49; two < 58; two++)
{
for (three = 50; three < 58; three++)
{
if (three > two && two > one)
{
putchar(one);
putchar(two);
putchar(three);
if (one != 55 || two != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

