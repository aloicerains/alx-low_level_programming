/**
 * print_strings - function prints string followed by newline
 * @separator: pointer to string separator
 * @n: number of strings passed to the function
 *
 *Reeturn: nothing
 */
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		string = va_arg(ap, char *);
		if (string != NULL)
		{
			printf("%s", string);
			if (separator != NULL && i != n - 1)
				printf("%s ", separator);
		}
		if (string == NULL)
		{
			printf("(nil)");
			if (separator != NULL && i != n - 1)
				printf("%s ", separator);
		}

	}
	va_end(ap);
	printf("\n");
}
