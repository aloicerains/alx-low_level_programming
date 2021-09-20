/**
 * _strcpy - Function copies one string to the other
 * @src: string to copy from
 * @dest: string to copy to
 *
 * Description: Function copies src to dest
 * Return: character pointer dest
 */
#include "main.h"
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
	{
		(dest[i] = src[i]);
	}
	return (dest);
}
