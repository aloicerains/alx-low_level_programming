/**
 * print_line - Prints line on the screen
 *@n: number of times to print _
 *
 * Description: Function prints _ of size n
 * Return: void
 */
#include "holberton.h"
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}



