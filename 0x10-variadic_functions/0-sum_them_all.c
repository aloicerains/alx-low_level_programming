/**
 * sum_them_all - function sums all parameter arguments
 * @n: number of arguments
 *
 * Return: summation
 */
#include <stdarg.h>
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum, i;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
