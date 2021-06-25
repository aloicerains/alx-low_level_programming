/**
 *print_triangle - Prints triangle on the screen
 *@size: interger argument
 *
 * Description: Function prints diagonal triangle on screen
 * Return: void
 */
#include "holberton.h"
void print_triangle(int size)
{
	int r;
	int c;
	int c1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = r; c < size; c++)
			{
				_putchar(' ');
			}
			for (c1 = 1; c1 <= r; c1++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
