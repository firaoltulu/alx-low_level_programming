#include "main.h"
/**
 * print_rev - this function print the argument in reverse
 * @s: string pointer that points to the variable
 * that is passed to this function to print it in reverse
 * return: nothing (void)
 */
void print_rev(char *s)
{
int three = 0;
int four;

while (*s != '\0')
{
three++;
s++;
}
s--;
four = three;
do {
_putchar(*s);
s--;
four--;
} while (four > 0);

_putchar('\n');
}
