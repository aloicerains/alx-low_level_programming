/**
 * _memcpy - prints copies memory bytes
 * @dest: pointer to the destination
 * @src: pointer to source
 * @n: Memory bytes to be copied
 *
 * Description: Function copies n bytes from src to memory dest
 *
 * Return: character pointer dest
 */
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *sr = (char *)src;
	char *des = (char *)dest;

	if ((*des == '\0') && (*sr == '\0'))
		return ('\0');
	while (n)
	{
		*(des++) = *(sr++);
		--n;
	}
	return (dest);
}
