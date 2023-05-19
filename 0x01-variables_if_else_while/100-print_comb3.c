#include <stdio.h>

/**
 * main - entry function
 * Return: 0
 */

int main(void)
{
int brains = 48, materials = 49;

do {
do {
if (materials > brains)
{
putchar(brains);
putchar(materials);
if (brains != 56 || materials != 57)
{
putchar(',');
putchar(' ');
}
}
materials++;
} while (materials <= 57);
brains++;
} while (brains <= 56);

putchar('\n');
return (0);
}
