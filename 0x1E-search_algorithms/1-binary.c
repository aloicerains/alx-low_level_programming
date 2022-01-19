#include "search_algos.h"
/**
 * binary_search - function searches a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where the value is located else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	l = 0;
	r = size - 1;
	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
			else
				printf("\n");
		}
		m = ((l + r) / 2);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
