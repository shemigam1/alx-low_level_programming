#include "3-calc.h"

/**
 * get_op_func - gets function
 * @s: op
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if ((s[0] == *(ops[i].op)) && (s[1] == '\0'))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
