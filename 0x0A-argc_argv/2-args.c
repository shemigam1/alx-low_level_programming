#include "main.h"
#include <stdio.h>

/**
 * main - prints all the args
 * @argc: num of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
