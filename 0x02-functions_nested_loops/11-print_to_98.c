/**
 *print_to_98 - Prints list of integers
 *@n : integer argument from where list begins
 *
 * Description: Function prints the integers from n to 98
 * Return: void
 */
#include <stdio.h>
#include "holberton.h"
void print_to_98(int n)
{
	int r;

	if (n <= 98)
	{
		for (r = n; r <= 98; r++)
		{
			if (r == 98)
			{
				printf("%d", r);
					continue;
			}
			else
			{
				printf("%d, ", r);
			}
		}
		printf("\n");
	}
	else
	{
		for (r = n; r >= 98; r--)
		{
			if (r == 98)
			{
				printf("%d", r);
				continue;
			}
			else
			{
				printf("%d, ", r);
			}
		}
		printf("\n");
	}
}
