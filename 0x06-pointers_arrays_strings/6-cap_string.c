/**
 *cap_string - Function capitalizes first character after punctuation
 * @a: string being converted
 *
 * Description: Function capitalizes first character
 * Return: character pointer
 */
#include <stdio.h>
#include "holberton.h"
char *cap_string(char *a)
{
	int i;
	int j;
	int flag;
	char k[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}', '\0'};

	i = 0;
	j = 0;
	flag = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (flag == 1)
		{
			if ((a[i] >= 'a' && a[i] <= 'z'))
			{
				a[i] = a[i] - 32;
				flag = 0;
			}
			else
			{
				a[i] = a[i];
				flag = 0;
			}
		}
		else
			{
				a[i] = a[i];
				flag = 0;
			}
		for (j = 0; j <= 13; j++)
		{
			if (a[i] == k[j])
			{
				if (a[i] == '\t')
					a[i] = ' ';
				flag = 1;
				break;
			}
		}
	}
	return (a);
}
