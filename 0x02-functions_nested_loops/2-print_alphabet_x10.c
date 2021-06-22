/**
 * print_alphabet_x10 - prints alphabet
 *
 * Description: Function prints lowercase alphabets 10 times
 * Uses _puchar function to print alphabets
 * Return: void
 */
#include "holberton.h"
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	};
}
