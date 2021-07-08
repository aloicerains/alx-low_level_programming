/**
 * is_palindrome - determines if string is palindrome
 * @s: string argument
 *
 * Return: 1 success, 0 failure.
 */
#include "holberton.h"
#include "2-strlen_recursion.c"
int is_palindrome(char *s)
{
	int check(char *s, int k, int i);
	if (_strlen_recursion(s) == 0)
		return (1);
	return (check(s, _strlen_recursion(s), 0));
	_putchar('\n');
}
/**
 * check - function checks if string is palindrome
 * @s: string argument
 * @k: string length
 * @i: initial argument
 *
 * Descripton: a palindrome string is reads the same when reversed
 * Return: 1 palindrome, 0 not
 */
int check(char *s, int k, int i)
{
	if (i < ((k + 1) / 2))
	{
		return ((s[i] == s[(k - 1) - i] ? 1 : 0) * check(s, k, i + 1));
	}
	return (1);
}

