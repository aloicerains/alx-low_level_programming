/**
 * swap_int - Function swaps integer variable
 * @a: pointer to variable a
 * @b: pointer to variable b
 *
 * Description: Function swaps values of a with b
 * Return: void
 */
#include "holberton.h"
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
