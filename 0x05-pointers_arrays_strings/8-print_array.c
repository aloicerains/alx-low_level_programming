/**
 * print_array - Function prints array of numbers
 * @n : integer size of array
 * @a : string pointer
 *
 * Description: Function prints elements of an array in straight line
 * Return: void
 */
#include "holberton.h"
#include "_putchar.c"
void print_array(int *a, int n)
{
	void printing(int x);
	int i;

	for (i = 0; i < n; i++)
	{
		printing(a[i]);
		if (i == n - 1)
			continue;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
/**
 * printing - prints the integer whether positive or negative
 *@x: integer argument
 *
 * Description: prints both positive and negative numbers
 * Return: void
 */
void printing(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x / 10)
		printing(x / 10);
	_putchar(x % 10 + '0');
}
