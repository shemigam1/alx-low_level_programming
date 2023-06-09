#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: num of args
 * @argv: array of args
 * Return: void
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
