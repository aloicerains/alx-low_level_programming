/**
 * free_grid - returns pointer to 2 dimensional array
 * @grid : grid to be cleared
 * @height: column element
 *
 * Return: void
 */
#include <stdlib.h>
#include <stdio.h>
void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
		free(grid);
}
