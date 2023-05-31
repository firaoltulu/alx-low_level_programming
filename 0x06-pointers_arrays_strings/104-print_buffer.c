#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b:  Char pointer that points to the variable
 * that is passed to this function
 * representation buffer
 * @ten: buffer size
 * @two: buffer size
 * @one: buffer size
 * Return: Nothing (void)
 */
void print_second(char *b, int ten, int two, int one)
{
for (ten = 0; ten < two; ten++)
{
int nine = *(b + one + ten);

if (nine < 32 || nine > 132)
{
nine = '.';
}
else
printf("%c", nine);
}
}

/**
 * print_buffer - prints buffer
 * @b:  Char pointer that points to the variable
 * that is passed to this function
 * representation buffer
 * @size: Integer that is passed to this function that
 * tells buffer size
 * Return: Nothing (void)
 */

void print_buffer(char *b, int size)
{
int one = 0;
int two;
int ten;

if (size <= 0)
{
printf("\n");
return;
}
else
{
for (; one < size; one += 10)
{
two = size - one < 10 ? size - one : 10;
printf("%08x: ", one);
for (ten = 0; ten < 10; ten++)
{
if (ten < two)
printf("%02x", *(b + one + ten));
else
printf("  ");
if (ten % 2)
{
printf(" ");
}
}

print_second(b, ten, two, one);
printf("\n");
}
}
}
