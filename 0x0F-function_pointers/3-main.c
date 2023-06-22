#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @ac: int
 * @av: arr
 * Return: int
 */

int main(int ac, char **av)
{
	int num1, num2, res;
	int (*op)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	op = get_op_func(av[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(av[2]) == '/' && atoi(av[2]) == '%') || num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = op(num1, num2);
	printf("%d\n", res);
	return (0);
}
