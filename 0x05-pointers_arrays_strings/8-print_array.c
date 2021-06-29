/**
 * print_array - Function prints array of numbers
 * @n : integer size of array
 * @a : string pointer
 *
 * Description: Function prints elements of an array in straight line
 * Return: void
 */
#include "holberton.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
