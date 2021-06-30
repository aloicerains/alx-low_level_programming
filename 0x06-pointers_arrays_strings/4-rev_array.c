/**
 * reverse_array - Function compares two strings
 * @a: string one
 * @n: array elements
 *
 * Description: Function reverses content of an array
 * Return: void
 */
#include <stdio.h>
#include "holberton.h"
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int c;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}
