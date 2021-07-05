/**
 * print_diagsums - Function prints the sume of two diagonals of square matrix
 * @a : the integer pointer argument
 * @size: array size
 *
 * Return: Void
 */
#include "holberton.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int i, j;
	long int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + (i * size + j));
			if (i + j == size - 1)
				sum2 += *(a + (i * size + j));
		}
	}
	printf("%ld, %ld\n", sum1, sum2);
}
