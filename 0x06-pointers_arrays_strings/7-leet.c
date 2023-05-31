#include "main.h"
/**
 * leet - This Encode Specific Character
 * @n: Char pointer that points to the variable
 * that is passed to this function to be changed.
 * Return: char pointer n
 */
char *leet(char *n)
{
int nine = 0;
int ten;
char one[] = "aAeEoOtTlL";
char two[] = "4433007711";

do {
for (ten = 0; ten < 10; ten++)
{
if (n[nine] == one[ten])
{
n[nine] = two[ten];
}
}
nine++;
} while (n[nine] != '\0');
return (n);
}
