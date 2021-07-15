/**
 * malloc_checked - function allocates memory using malloc
 * @b: memory size being allocated
 *
 * Return: void pointer
 */
#include <stdlib.h>
#include <stdio.h>
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
