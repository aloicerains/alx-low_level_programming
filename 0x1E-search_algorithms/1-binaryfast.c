#include "search_algos.h"
/**
 * ceiling - function determines the ceiling of division
 * @num: number to be determined
 *
 * Return: ceil
 */
int ceiling(float num)
{
	int inum;

	inum = (int)num;
	if (num == (float)inum)
		return (inum);
	return (inum + 1);
}
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
	while (l != r)
	{
		m = ceiling(((float)(r) + (float)(l)) / 2);
		if (array[m] > value)
			r = m - 1;
		else
			l = m;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d",array[i]);
			if (i != r)
				printf(", ");
			else
				printf("\n");
		}
	}
	if (array[l] == value)
		return (l);
	return (-1);
}
