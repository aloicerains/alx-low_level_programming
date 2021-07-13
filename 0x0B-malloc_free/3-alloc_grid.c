/**
 * alloc_grid - returns pointer to 2 dimensional array
 * @width : row element
 * @height: column element
 *
 * Return: NULL failure, pointer (success)
 */
#include <stdlib.h>
#include <stdio.h>
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(**array) * height);
	for (i = 0; i < height; i++)
		array[i] = malloc(sizeof(*array) * width);
	if (array)
	{
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		return (array);
	}
	else
		return (NULL);
	free(array);

}
