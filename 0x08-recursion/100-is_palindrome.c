#include "main.h"

int firaol_check(char *two, int three, int four);
int Firaol_strlen(char *one);

/**
 * firaol_check - this function checks the characters
 * recursively for palindrome
 * @two: Char pointer that points to the variable
 * that is passed to this function which
 * represent the string to check
 * @three: Interger that is passed to this function which
 * represent the iterator
 * @four: Interger that is passed to this function which
 * represent the length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int firaol_check(char *two, int three, int four)
{
if (*(two + three) != *(two + four - 1))
{
return (0);
}
else if (three >= four)
{
return (1);
}
else
{
return (firaol_check(two, three + 1, four - 1));
}
}

/**
 * is_palindrome - this function checks if a string
 * is a palindrome
 * @s: Char pointer that points to the variable
 * that is passed to this function which
 * represent the string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
else
{
return (firaol_check(s, 0, Firaol_strlen(s)));
}
}

/**
 * Firaol_strlen - THis function returns the length of
 * a string
 * @one: Char pointer that points to the variable
 * that is passed to this function which
 * represent the string to calculate the length of
 *
 * Return: length of the string
 */
int Firaol_strlen(char *one)
{
if (*one == '\0')
{
return (0);
}
else
{
return (1 + Firaol_strlen(one + 1));
}
}
