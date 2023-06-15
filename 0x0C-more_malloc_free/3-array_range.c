#include <stdlib.h>
#include "main.h"

/**
 * *array_range - This Function creates an array of integers
 * @min: Integer that is passed to this function
 * to represent minimum range of values stored
 * @max: Integer that is passed to this function
 * to represent maximum range of values stored
 * and number of elements.
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *two;
int three, four;

if (min > max)
{
return (NULL);
}
else
{
four = max - min + 1;
two = malloc(sizeof(int) * four);

if (two == NULL)
{
return (NULL);
}
else
{

for (three = 0; min <= max; three++)
{
two[three] = min++;
}
return (two);
}
}
}
