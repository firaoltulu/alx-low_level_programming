#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: Char pointer that points to the variable
 * that is passed to this function
 * Return: Nothing (Void)
 */
void print_chessboard(char (*a)[8])
{
int nine;
int ten;

for (nine = 0; nine < 8; nine++)
{
for (ten = 0; ten < 8; ten++)
_putchar(a[nine][ten]);
_putchar('\n');
}
}
