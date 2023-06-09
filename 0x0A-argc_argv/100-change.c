#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints num of coins
 * @argc: num of args
 * @argv: array of args
 * Return: 0 on success 1 on failure
 */

int main(int argc, char **argv)
{
	int i, a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (1);
	}
	a = 0;

	while (i > 0)
	{
		if (i >= 25)
		{
			a += i / 25;
			i %= 25;
		}
		else if (i >= 10)
		{
			a += i / 10;
			i %= 10;
		}
		else if (i >= 5)
		{
			a += i / 5;
			i %= 10;
		}
		else if (i >= 2)
		{
			a += i / 2;
			i %= 2;
		}
		else
		{
			a += i;
			break;
		}
	}
	printf("%d\n", a);
	return (0);
}
