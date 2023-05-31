#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s:  Char pointer that points to the variable
 * that is passed to this function to be changed.
 *
 * Return: char pointer *s
 */

char *rot13(char *s)
{
int two = 0;
int ten;
char nine[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char six[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

do {
for (ten = 0; ten < 52; ten++)
{
if (s[two] == nine[ten])
{
s[two] = six[ten];
break;
}
}
two++;
} while (s[two] != '\0');

return (s);
}
