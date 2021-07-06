/**
 * set_string - Function set value of pointer to char
 * @s: pointer being set
 * @to: char pointer set to
 *
 * Return: Void
 */
#include "holberton.h"
#include <stdio.h>
void set_string(char **s, char *to)
{
	*s = to;
}

