/**
 * print_name - function prints name
 * @name: name argument
 * @f: function pointer to print name
 *
 * Return: void
 */
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
