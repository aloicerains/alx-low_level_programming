/**
 * set_bit - function sets a given bit in a number
 * @n: Pointer to integer argument value
 * @index: Determines the bit to set
 *
 * Return: 1 for success, and -1 for failure
 */
#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
	{
		*n = *n | 1 << index;
		return (1);
	}
	return (-1);
}
