/**
 *print_triangle - Prints diagonal line on the screen
 *@k: interger argument
 *
 * Description: Function prints diagonal spaces
 * Return: void
 */
#include "holberton.h"
void space(int k);
void triangle(int j);
void print_triangle(int size)
{
	int c;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		c = size;
		for (j = 0; j <= size; j++)
		{
			space(c);
			triangle(j);
			if (j == size)
				continue;
			_putchar('\n');
			c--;
		}
	}
}
/**
 * space - prints single space
 * @k: number of spaces
 *
 * Description: Prints number of spaces based on k
 * Return: void
 */
void space(int k)
{
	int i;

	for (i = 0; i < k; i++)
	{
		_putchar(' ');
	}
}
/**
 * triangle - prints triangles hashes
 * @j: number of triangles
 *
 * Description: prints jxj tringles
 * Return: void
 */
void triangle(int j)
{
	int i;

	for (i = 0; i < j; i++)
	{
		_putchar('#');
	}
}
