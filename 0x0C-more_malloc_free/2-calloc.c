/**
 * _calloc - function allocates memory for an array
 * @nmemb : number of array elments
 * @size : size of each element
 *
 * Return: void pointer
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb * size);
	if (p == NULL || size == 0 || nmemb == 0)
		return (NULL);
	bzero(p, nmemb * size);
	return (p);
}
