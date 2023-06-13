#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this function frees
 * 2 dimensional grid.
 * @grid: Integer Poniter that points to a variable
 * that is passed to this function which represent 2 dimensional
 * grid to be free
 * @height: Integer that is passed to this function  which represent
 * height dimension of grid
 * Return: nothing (void)
 *
 */
void free_grid(int **grid, int height)
{
int two = 0;
int locheight = height;

do {
free(grid[two]);
two++;
} while (two < locheight);
free(grid);
}
