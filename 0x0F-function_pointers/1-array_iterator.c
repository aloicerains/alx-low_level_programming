/**
 * array_iterator - function executes array of functions
 * @array: array arguments
 * @size: array size
 * @action: pointer to void function taking int arguments
 *
 * Return: nothing
 */
#include <stddef.h>
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
