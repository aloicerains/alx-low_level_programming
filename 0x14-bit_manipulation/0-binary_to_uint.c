/**
 * binary_to_uint - function converst binary to unsigned int
 * @b: Pointer to string containing 0 and 1 characters
 *
 * Return: The converted number or 0 if it failed.
 */
#include <stddef.h>
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int c = 0;

	if (b != NULL)
	{
		while (b[c] == '0' || b[c] == '1')
		{
			dec <<= 1;
			dec += b[c] - '0';
			c++;
		}
		if (b[c] == '\0')
			return (dec);
	}
	return (0);
}
