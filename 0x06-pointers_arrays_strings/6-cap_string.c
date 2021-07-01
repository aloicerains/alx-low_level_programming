/**
 *cap_string - Function capitalizes beginning words of string
 * @a: string being converted
 *
 * Description: Function returns the sentence cases
 * Return: void
 */
#include <stdio.h>
#include "holberton.h"
char *cap_string(char *a)
{
	int i;
	int flag;

	flag = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (flag == 1)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
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
		if (a[i] == ' ' || a[i] == '.' || a[i] == '?' || a[i] == '!' || a[i] == '(')
		{
			flag = 1;
		}
		if (a[i] == ')' || a[i] == '{' || a[i] == '}' || a[i] == '\n')
		{
			flag = 1;
		}
		if (a[i] == '\t')
		{
			a[i] = ' ';
			flag = 1;
		}
	}
	return (a);
}
