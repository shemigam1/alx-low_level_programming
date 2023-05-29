#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: num to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf(" \n");
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + (n - 1)));
}	
