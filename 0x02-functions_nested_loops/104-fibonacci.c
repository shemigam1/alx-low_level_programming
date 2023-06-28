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
	printf("%lu", a);
	if (98 > 1)
	{
		printf(", %lu", b);
	}

	for (i = 2; i < 98; i++)
	{
		unsigned long int c;
		
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
