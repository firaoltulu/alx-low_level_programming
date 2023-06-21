#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This Function Returns
 * the sum of two numbers.
 * @a: Integer that is passed to indicate
 * The first number to be added.
 * @b: Integer that is passed to indicate
 * The second number to be added.
 *
 * Return: Integer The sum of a and b.
 */

int op_add(int a, int b)
{
int one = a + b;
return (one);
}

/**
 * op_sub - This Function Returns
 * the difference of two numbers.
 * @a: Integer that is passed to indicate
 * The first number to be subtracted.
 * @b: Integer that is passed to indicate
 * The second number to be subtracted.
 *
 * Return: Integer The difference of a and b.
 */

int op_sub(int a, int b)
{
int two = a - b;
return (two);
}

/**
 * op_mul - This Function Returns
 * the product of two numbers.
 * @a: Integer that is passed to indicate
 * The first number to multiply.
 * @b: Integer that is passed to indicate
 * The second number to multiply.
 *
 * Return: Integer The product of a and b.
 */

int op_mul(int a, int b)
{
int three = a * b;
return (three);
}

/**
 * op_div - This Function Returns
 * the division of two numbers.
 * @a: Integer that is passed to indicate
 * The first number to divide.
 * @b: Integer that is passed to indicate
 * The second number to divide.
 *
 * Return: Integer The quotient of a and b.
 */
int op_div(int a, int b)
{
int four = a / b;
return (four);
}
/**
 * op_mod - This Function Returns
 * the remainder of the division of two numbers.
 * @a: Integer that is passed to indicate
 * The first number to be divide.
 * @b: Integer that is passed to indicate
 * The second number to be divide.
 *
 * Return: Integer The remainder of
 * the division of a by b.
 */
int op_mod(int a, int b)
{
int five = a % b;
return (five);
}