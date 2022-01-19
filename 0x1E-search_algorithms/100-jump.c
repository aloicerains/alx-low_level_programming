#include "search_algos.h"
/**
 * minimum - function finds the minimum value
 * @a: first argument
 * @b: second argument
 *
 * Return: minimum value
 */
size_t minimum(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
 * jump_search - function performs jum search algorithm
 * @array: pointer to first element of the array to search
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, min;

	a = 0;
	b = sqrt(size);
	min = minimum(b, size);
	if (array == NULL)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	while ((array[min - 1]) < value)
	{
		a = b;
		b += sqrt(size);
		min = minimum(b, size);
		if (a >= size)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%ld] and  [%ld]\n", a, b);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	while (array[a] < value)
	{
		a += 1;
		min = minimum(b, size);
		if (a == min)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}
	if (array[a] == value)
		return (a);
	else
		return (-1);
}
