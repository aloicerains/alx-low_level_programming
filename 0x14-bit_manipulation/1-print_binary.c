/**
 * print_binary- function converst decimal to binary and prints
 * @n: Decimal argument
 *
 * Return: Nothing.
 */
#include <stdlib.h>
#include "main.h"
void print_binary(unsigned long int n)
{
	char bin[32];
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		bin[i] = ((n & 1) == 0 ? '0' : '1');
		n >>= 1;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(bin[j]);
}
