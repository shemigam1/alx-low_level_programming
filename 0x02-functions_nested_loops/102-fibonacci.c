#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned int a, b, c, i;

	a = 1;
	b = 2;
	printf("%u, %u, ", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf("%u, ", c);
		a = b;
		b = c;
	}
	c = a + b;
	printf("%u\n", c);
	return (0);
}
