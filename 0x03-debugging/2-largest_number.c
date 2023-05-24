#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
int largest;
if (b > a && b > c)
{
largest = b;
}
else if (b > a && c > b)
{
largest = c;
}
else if (a > c)
{
largest = a;
}
else
{
largest = c;
}
return (largest);
}
