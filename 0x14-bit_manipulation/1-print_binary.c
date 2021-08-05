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
	void print(unsigned long int k);

	if (n == 0)
	{
		_putchar('0');
	}
	if (n > 0)
		print(n);
}
/**
 * print - function prints the binary
 * @k: decimal argument
 *
 * Return: nothing
 */
void print(unsigned long int k)
{
	char b;

	if (k > 0)
	{
		b = ((k & 1) == 0 ? '0' : '1');
		k >>= 1;
		print(k);
		_putchar(b);
	}
}
