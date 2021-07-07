/**
 *is_prime_number  - function determines if input is prime number
 * @n: number argument
 *
 * Return: 1 (success) 0 (failure)
 */
#include "holberton.h"
int is_prime_number(int n)
{
	int prime(int i, int no);
	return (prime((n / 2), n));
}
/**
 * prime - function determines prime numbers
 * @i: integer argument half the number
 * @no: integer number being determined
 *
 * Return: 1 success, 0 failure
 */
int prime(int i, int no)
{
	if (i < 2)
		return (0);
	if (i == 2)
		return (1);
	if (no % i == 0)
		return (0);
	return (prime(i - 1, no));
}

