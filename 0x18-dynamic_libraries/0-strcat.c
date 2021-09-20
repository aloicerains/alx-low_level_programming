/**
 * _strcat - Function concatenates twwo strings
 * @dest: string one
 * @src: string two
 *
 * Description: Function combines string two to string one
 * Return: pointer to dest
 */
#include "main.h"
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	return (dest);
}
