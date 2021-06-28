/**
 * print_array - Function prints array of numbers
 * @x: integer argument
 *
 * Description: Function prints elements of an array in straight line
 * Return: void
 */
#include "holberton.h"
#include "_putchar.c"
void printing(int x);
void print_array(int *a, int n)
{
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
