/**
 * get_bit - function determines the location of the given bit
 * @n: integer argument value
 * @index: Determines the bit to return
 *
 * Return: The value of the bit
 */
#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	int shift, shiftedN, id;

	if (index < 32)
	{
		shift = 1 << index;
		shiftedN = n & shift;
		id = shiftedN >> index;
		return (id);
	}
	return (-1);
}
