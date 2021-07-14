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
	int **array = NULL;
	int *arr = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc((sizeof(int*) * height) + (sizeof(int) * height * width));
	arr = (int*)(array + height);
	i = 0;
	j = 0;
	if (array != NULL)
		for(; i < height; i++)
		{
			array[i] = arr + (i*width);
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
	else
		return (free(array),NULL);
	return (array);
}
