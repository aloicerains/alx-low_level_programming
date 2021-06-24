/**
 * print_most_numbers - prints numbers 0-9
 *
 * Description: Function do not display 2 and 4
 * Return: void
 */
#include "holberton.h"
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar('0' + i);
	}
	_putchar('\n');
}



