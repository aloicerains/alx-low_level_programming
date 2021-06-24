/**
 *print_diagonal - Prints diagonal line on the screen
 *space - print single space
 *@n: number of times to print line or space
 *
 * Description: Function prints diagonal spaces
 * Return: void
 */
#include "holberton.h"
void space(int n);
void print_diagonal(int n)
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
			space(i);
			_putchar('\\');
			if (i == n - 1)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
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



