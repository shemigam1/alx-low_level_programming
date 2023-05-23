#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned int a, b, c, i;

	a = 0;
	b = 1;
	for (i = 0; i < 49; i++)
	{
		c = a + b;
 		printf("%d, ", c);
		a = b;
		b = c;
	}
	c = a + b;
	printf("%d\n", c);
	return (0);
}
