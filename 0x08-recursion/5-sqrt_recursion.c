/**
 *_sqrt_recursion  - function returns natural square root of a number
 * @n: number argument
 *
 * Descriptoin: Function gives the argument n to the function to obtain
 * the root
 * Return: natural squareroot
 */
#include "holberton.h"
int _sqrt_recursion(int n)
{
	int function(int root, int square);
	return (function(0, n));
}
/**
 * function - function gets square argument and returns the root
 * @root: root argument
 * @square: square being determined
 *
 * Description: Function takes argument from above as square and return root
 * Return: root
 */
int function(int root, int square)
{
	if (root * root == square)
		return (root);
	if (root * root > square)
		return (-1);
	return (function((root + 1), square));
}
