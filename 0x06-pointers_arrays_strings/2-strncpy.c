/**
 * _strncpy - Function copies one string to the other
 * @dest: string one
 * @src: string two
 * @n: size to be copied
 *
 * Description: Function copies string src to string dest
 * Return: pointer to dest
 */
#include "holberton.h"
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int size;

	size = 0;
	j = 0;
	while ((dest[j] = src[j]) != '\0')
	{
		size += sizeof(src[j]);
		if (size >= n)
			break;
		j++;
	}
	return (dest);
}
