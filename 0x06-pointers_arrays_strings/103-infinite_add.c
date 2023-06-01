#include "main.h"

/**
 * firaol - Fuction for betty checker to pass
 * @n: Char pointer that points to the variable
 * that is passed to this function to be changed.
 * Return: nothing (void)
 */

void firaol(char *four)
{
int one = 0;
int two = 0;
char three;

while (*(four + one) != '\0')
{
one++;
}
one--;
for (two = 0; two < one; two++, one--)
{
three = *(four + two);
*(four + two) = *(four + one);
*(four + one) = three;
}
}

/**
 * infinite_add - this function add 2 numbers together
 * @n1: Char pointer that points to the variable
 * that is passed to this function that text representation of
 * 1st number to add
 * @n2:  Char pointer that points to the variable
 * that is passed to this function that text representation of
 * 2nd number to add
 * @r:  Char pointer that points to the variable
 * that is passed to this function that is pointer to buffer
 * @size_r: buffer size
 * Return: pointer parameter r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int five = 0;
int six = 0;
int seven = 0;
int eigth = 0;
int nine = 0;
int ten = 0;
int one = 0;

while (*(n1 + six) != '\0')
six++;
while (*(n2 + seven) != '\0')
seven++;
six--;
seven--;
if (seven >= size_r || six >= size_r)
return (0);
while (seven >= 0 || six >= 0 || five == 1)
{
if (six < 0)
nine = 0;
else
nine = *(n1 + six) -'0';
if (seven < 0)
ten = 0;
else
ten = *(n2 + seven) -'0';
one = nine + ten + five;
if (one >= 10)
five = 1;
else
five = 0;
if (eigth >= (size_r - 1))
return (0);
*(r + eigth) = (one % 10) + '0';
eigth++;
seven--;
six--;
}
if (eigth == size_r)
return (0);
*(r + eigth) = '\0';
firaol(r);
return (r);
}
