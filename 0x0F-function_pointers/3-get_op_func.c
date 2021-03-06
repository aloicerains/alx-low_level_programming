/**
 * get_op_func - function recieves the operation to perform
 * @s: pointer to operator
 *
 * Return: pointer to function corresponding to operator
 */
#include <stddef.h>
#include "3-calc.h"
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	if (s != NULL && s[1] == '\0')
	{
		while ((ops[i].op != NULL) && (*(ops[i].op) != *s))
			i++;
		return (ops[i].f);
	}
	return (NULL);
}



