/**
 * _memset - prints contant bytes to a memory section
 * @s: pointer to the string
 * @b: constant to be filled
 * @n: Memory bytes to be filled
 *
 * Description: Function fills first n bytes of memory pointed
 * by s with constant b
 * Return: character pointer s
 */
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
