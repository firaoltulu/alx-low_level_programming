#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: Integer that tells the height and weight
 * of the triangle
 *
 * return: nothing (void)
 */
void print_triangle(int size)
{
int ten = size;

if (ten > 0)
{
int nine = 1;
int six;

do {
for (six = nine; six < ten; six++)
{
_putchar(' ');
}

for (six = 1; six <= nine; six++)
{
_putchar('#');
}

_putchar('\n');
nine++;
} while (nine <= ten);

}
else
{
_putchar('\n');
}
}
