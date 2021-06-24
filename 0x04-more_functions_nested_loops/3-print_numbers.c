/**
 * print_numbers - prints numbers 0-9
 *
 * Description: Function displays numbers 0 - 9
 * Return: void
 */
#include "holberton.h"
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}



