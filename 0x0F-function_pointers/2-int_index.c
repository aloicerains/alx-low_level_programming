/**
 * int_index - function searches for an integer
 * @array: array argument
 * @size: array size
 * @cmp: pointer to a function comparing values
 *
 * Return: index of first element for which cmp is not 0
 */
#include "function_pointers.h"
#include <stdio.h>
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	r = -1;
	if (array != NULL && cmp != NULL)
	{
		if (size < 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				r = i;
				break;
			}
		}
	}
	return (r);
}
