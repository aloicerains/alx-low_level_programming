/**
 * flip_bits - function determines the number of bits to be flipped
 * @n: integer argument value of first number
 * @m: integer argument value of the second number
 *
 * Return: number of bits needed to be flipped
 */
#include "main.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = 0;
	unsigned long int k;

	k = n ^ m;

	while (k != 0)
	{
		c++;
		k &= (k - 1);
	}
	return (c);
}
