#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: ptr to int
 * @size: int
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int c, b = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		b += a[i * size + i];
		c += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", b);
	printf("%d\n", c);
}
