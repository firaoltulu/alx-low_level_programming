#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - THis Function returns a pointer
 * to a 2 dimensional array of integers.
 * @width: Integer that is passed to this function to represent
 * width.
 * @height: Integer that is passed to this function to represent
 * height.
 * Return: Integer pointer points to 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
int **nine;
int ten = 0;
int one;

if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
nine = malloc(sizeof(int *) * height);

if (nine == NULL)
{
return (NULL);
}
do
{
nine[ten] = malloc(sizeof(int) * width);

if (nine[ten] == NULL)
{
for (; ten >= 0; ten--)
{
free(nine[ten]);
}
free(nine);
return (NULL);
}
ten++;
} while (ten < height);

for (ten = 0; ten < height; ten++)
{
for (one = 0; one < width; one++)
{
nine[ten][one] = 0;
}
}

return (nine);
}
}