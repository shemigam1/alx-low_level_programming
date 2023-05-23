#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int a, b, c, i;

	a = 0;
	b = 1;
	i = 0;
	do {
		c = a + b;
		if (c % 2 == 0)
			i += c;
		a = b;
		b = c;
	} while (c <= 4000000);
	printf("%lu\n", i);
	return (0);
}


