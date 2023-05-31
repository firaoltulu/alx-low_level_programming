#include "main.h"

/**
 * infinite_add - add 2 numbers together
 * @n1: Char pointer that points to the variable
 * that is passed to this function
 * representation of 1st number to add
 * @n2: Char pointer that points to the variable
 * that is passed to this function text
 * representation of 2nd number to add
 * @r:Char pointer that points to the variable
 * that is passed to this function that points to buffer
 * @size_r: Integer that is passed to this function that
 * tells buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0;
int one = 0;
int two = 0;
int ten = 0;
int nine = 0;
int six = 0;
int five = 0;

while (*(n1 + one) != '\0')
{
one++;
}
while (*(n2 + two) != '\0')
{
two++;
}
one--;
two--;
if (two >= size_r || one >= size_r)
{
return (0);
}
while (two >= 0 || one >= 0 || overflow == 1)
{
if (one < 0)
{
nine = 0;
}
else
{
nine = *(n1 + one) -'0';
}
if (two < 0)
{
six = 0;
}
else
{
six = *(n2 + two) -'0';
}
five = nine + six + overflow;
if (five >= 10)
{
overflow = 1;
}
else
{
overflow = 0;
}
if (ten >= (size_r - 1))
{
return (0);
}
*(r + ten) = (five % 10) + '0';
ten++;
two--;
one--;
}
if (ten == size_r)
{
return (0);
}
*(r + ten) = '\0';
char seven;
int four = 0;
int three = 0;

while (*(r + four) != '\0')
{
four++;
}
four--;

do {
seven = *(r + three);
*(r + three) = *(r + four);
*(r + four) = seven;
three++;
four--;
} while (three < four);
return (r);
}
