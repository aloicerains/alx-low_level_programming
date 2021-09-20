/**
 * _strncpy - Function copies one string to the other
 * @dest: string one
 * @src: string two
 * @n: size to be copied
 *
 * Description: Function copies string src to string dest
 * Return: pointer to dest
 */
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
