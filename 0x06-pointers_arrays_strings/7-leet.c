/**
 *leet - Function encodes letters to number characters
 * @a: string being converted
 *
 * Description: Function converts list of characters to numbers
 * Return: character pointer
 */
#include <stdio.h>
#include "holberton.h"
char *leet(char *a)
{
	int i;
	int j;
	char k[2][5] = {{'a', 'e', 'o', 't', 'l'},
		{'4', '3', '0', '7', '1'}};
	i = 0;
	while (a[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == k[0][j] || a[i] == k[0][j] - 32)
			{
				a[i] = k[1][j];
				continue;
			}
		}
		i++;
	}
	return (a);
}
