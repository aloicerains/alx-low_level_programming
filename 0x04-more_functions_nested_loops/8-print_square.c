/**
 * print_square - Prints squares on the screen
 *@size: number of squares
 *
 * Description: Function prints square of size x size
 * Return: void
 */
#include "holberton.h"
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}



