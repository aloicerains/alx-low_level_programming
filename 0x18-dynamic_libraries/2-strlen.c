/**
 * _strlen - Function determines string length
 * @s: character argument
 *
 * Description: Function computes the overall length of string
 * Return: length of a string
 */
#include "main.h"
int _strlen(char *s)
{
	int n;

	n = 0;
	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}
