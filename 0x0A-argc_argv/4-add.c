#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - multiplies the args
 * @argc: num of args
 * @argv: array of args
 * Return: 0 on success 1 on failure
 */

int main(int argc, char **argv)
{
	int i, j, k, l;

	if (argc <= 1)
		printf("0\n");
	k = 0;
	for (i = 1; i < argc; i++)
	{
		for (l = 0; argv[i][l] != '\0'; l++)
		{
			if (!isdigit(argv[i][l]))
			{
				printf("Error\n");
				return (1);
			}
		}
		j = atoi(argv[i]);
		k += j;
	}
	printf("%d\n", k);
	return (0);
}
