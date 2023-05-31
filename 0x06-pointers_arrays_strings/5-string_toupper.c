#include "main.h"
/**
 * string_toupper - This changes all lowercase in parameter n
 * to uppercase
 * @n: Char pointer that points to the variable
 * that is passed to this function to be
 * changed all from lowercase letters of a string to uppercase.
 *
 * Return: Char pointer n
 */
char *string_toupper(char *n)
{
int seven = 0;

do {
if (n[seven] >= 'a' && n[seven] <= 'z')
n[seven] = n[seven] - 32;
seven++;
} while (n[seven] != '\0');

return (n);
}
