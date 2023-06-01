#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to int
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int end = n - 1;
	int tmp;

	while (i < end)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
		end--;
		i++;
	}
}
