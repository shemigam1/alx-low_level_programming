#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: arg
 * Return: void
 */

void print_number(int n)
{
	int div, num;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (div <= n / 10)
	{
		div *= 10;
	}

	while (div > 0)
	{
		num = n / div;
		_putchar('0' + num);
		n %= div;
		div /= 10;
	}
}

