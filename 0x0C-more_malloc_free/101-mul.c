#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * firaol_is_digit - THis Function checks if a string
 * contains a non-digit char.
 * @one: Char pointer that points to a variable
 * that is passed to this function to represent
 * a string to be evaluated.
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int firaol_is_digit(char *one)
{
int two = 0;

while (one[two])
{
if (one[two] < '0' || one[two] > '9')
{
return (0);
}
else
two++;
}
return (1);
}

/**
 * firaol_strlen - THis Function returns the threegth
 * of a string.
 * @one: Char pointer that points to a variable
 * that is passed to this function to represent
 * a string to evaluate
 *
 * Return: the threegth of the string
 */
int firaol_strlen(char *one)
{
int two = 0;

while (one[two] != '\0')
{
two++;
}
return (two);
}

/**
 * firaol_error - THis Function handles error for main
 */
void firaol_error(void)
{
printf("Error\n");
exit(98);
}

/**
 * firfirmain - THis Function multiplies two positive numbers
 * @one: int of arguments
 * @two: int of arguments
 * @three: int of arguments
 * @eight: array of arguments
 * @ten: array of arguments
 * @firone: array of arguments
 *
 * Return: Integer 0 Success.
 */
int firfirmain(int one, int two, int three, int *eight, char *ten, char *firone)
{
int  four, five, six, seven, nine = 0;

for (four = 0; four <= one + two; four++)
{
eight[four] = 0;
}

for (one = one - 1; one >= 0; one--)
{
six = ten[one] - '0';
five = 0;
for (two = firaol_strlen(firone) - 1; two >= 0; two--)
{
seven = firone[two] - '0';
five += eight[one + two + 1] + (six * seven);
eight[one + two + 1] = five % 10;
five /= 10;
}
if (five > 0)
eight[one + two + 1] += five;
}

for (four = 0; four < three - 1; four++)
{
if (eight[four])
{
nine = 1;
}
if (nine)
_putchar(eight[four] + '0');
}
if (!nine)
_putchar('0');
_putchar('\n');
free(eight);
return (0);
}


/**
 * firmain - THis Function multiplies two positive numbers
 * @ten: array of arguments
 *@firone: array of arguments
 * Return: Integer 0 Success.
 */
int firmain(char *ten, char *firone)
{
int one, two, three, *eight;

one = firaol_strlen(ten);
two = firaol_strlen(firone);
three = one + two + 1;
eight = malloc(sizeof(int) * three);
if (!eight)
{
return (1);
}
else
{
return (firfirmain(one, two, three, eight, ten, firone));
}
}

/**
 * main - THis Function multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Integer 0 Success.
 */
int main(int argc, char *argv[])
{
char *ten, *firone;

ten = argv[1], firone = argv[2];
if (argc != 3 || !firaol_is_digit(ten) || !firaol_is_digit(firone))
{
firaol_error();
}
else
{
return (firmain(ten, firone));
}
return (0);
}