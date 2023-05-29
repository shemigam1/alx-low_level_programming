#include "main.h"

/**
 * swap_int - swaps values of two ints
 * @a: arg
 * @b: arg
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
