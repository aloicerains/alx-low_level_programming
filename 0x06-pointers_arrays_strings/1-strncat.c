/**
 * _strncat - Function concatenates twwo strings
 * @dest: string one
 * @src: string two
 * @n: byte size
 *
 * Description: Function combines string two to string one
 * Return: pointer to dest
 */
#include "holberton.h"
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int size;

	i = 0;
	size = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (size < n)
	{
		size += sizeof(src[j]);
		if (src[j] == '\0')
			break;
		dest[i++] = src[j++];
	}
	return (dest);
}
