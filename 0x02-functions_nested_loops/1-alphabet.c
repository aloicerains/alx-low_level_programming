/**
 * print_alphabet - prints alphabet
 *
 * Description: Function prints lowercases
 * Return: void
 */
#include "holberton.h"
void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
