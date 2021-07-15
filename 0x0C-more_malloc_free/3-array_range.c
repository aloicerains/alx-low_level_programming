/**
 * array_range - creates array of integers
 * @min : lowest value
 * @max : maximum value
 *
 * Return: integer pointer to the created array
 */
#include <string.h>
#include <stdlib.h>
int *array_range(int min, int max)
{
	int *arr;
	int length, i, num;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	arr = malloc(sizeof(*arr) * length);
	if (arr == NULL)
		return (NULL);
	num = min;
	for (i = 0; i < length; i++)
	{
		arr[i] = num;
		num++;
	}
	return (arr);
}

