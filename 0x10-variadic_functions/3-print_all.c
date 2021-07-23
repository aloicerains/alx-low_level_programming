/**
 * print_all - function prints various argument types
 * @format: pointer to format string to be printed
 *
 * Return: void
 */
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, k, p;
	char array[] = {'i', 'c', 'f', 's'};
	void (*f[])(va_list) = {print_i, print_c, print_f, print_s};

	k = 0;
	p = 0;
	va_start(ap, format);
	while (format != NULL && format[k] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (format[k] == array[i])
			{
				if (p != 0)
					printf(", ");
				(f[i])(ap);
				p = 1;
				break;
			}
			i++;
		}
		k++;
	}
	va_end(ap);
	printf("\n");
}
/**
 * print_i - function prints integers
 * @ap: va_list pointer argument
 *
 * Return: nothing
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_c - function prints characters
 * @ap: argument pointer
 *
 * Return: nothing
 */
void print_c(va_list ap)
{
	printf("%c", (char)va_arg(ap, int));
}
/**
 * print_f - function prints double values
 * @ap: va_list pointer argument
 *
 * Return: nothing
 */
void print_f(va_list ap)
{
	printf("%f", (double)va_arg(ap, double));
}
/**
 * print_s - function prints string
 * @ap: va_list argument pointer
 *
 * Return: nothing
 */
void print_s(va_list ap)
{
	char *s;

	s = va_arg(ap, char*);
	s = (char *)((s == NULL) *\
			(unsigned long)"(nil)" + (s != NULL) * (unsigned long) s);
		printf("%s", s);
}
