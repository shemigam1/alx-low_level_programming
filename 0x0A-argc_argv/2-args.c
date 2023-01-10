#include <stdio.h>
#include "main.h"

/**
 * main - prints args
 * @argc: num of args
 * @argv: arr of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
