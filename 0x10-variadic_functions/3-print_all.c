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
	int i, k, len;
	char array[] = {'i', 'c', 'f', 's'};
	void (*f[])(va_list) = {print_i, print_c, print_f, print_s};

	k = 0;
	len = strlen(format);
	va_start(ap, format);
	while (format[k] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (format[k] == array[i])
			{
				(f[i])(ap);
				if (k != len - 1)
					printf(", ");
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
	int i;

	i = va_arg(ap, int);
	printf("%d", i);
}
/**
 * print_c - function prints characters
 * @ap: argument pointer
 *
 * Return: nothing
 */
void print_c(va_list ap)
{
	char i;

	i = va_arg(ap, int);
	printf("%c", i);
}
/**
 * print_f - function prints double values
 * @ap: va_list pointer argument
 *
 * Return: nothing
 */
void print_f(va_list ap)
{
	double i;

	i = va_arg(ap, double);
	printf("%f", i);
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
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}
