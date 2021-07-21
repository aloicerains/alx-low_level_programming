/**
 * op_add - function adds integers
 * @a: argument one
 * @b: argument two
 *
 * Return: addition of the two integers
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
 * op_sub - function subtracts two integers
 * @a: argument one
 * @b: argument two
 *
 * Return: difference of two
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
 * op_mul - function multiplies two functions
 * @a: argument one
 * @b: argument two
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - function divides a by b
 * @a: argument one
 * @b: argument two
 *
 * Return: dividend
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return ((a) / (b));
}
/**
 * op_mod - function finds the modulus of a and b
 * @a: argument one
 * @b: argument two
 *
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return ((a) % (b));
}
