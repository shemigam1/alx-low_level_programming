#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the args
 * @argc: num of args
 * @argv: array of args
 * Return: 0 on success 1 on failure
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
