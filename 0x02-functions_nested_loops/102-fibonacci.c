#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int a, b, c, i;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	for (i = 0; i < 47; i++)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	c = a + b;
	printf("%lu\n", c);
	return (0);
}
