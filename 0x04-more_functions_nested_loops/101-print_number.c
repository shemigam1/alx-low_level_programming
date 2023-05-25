#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: arg
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n == 0)
		_putchar('0');

	if (n > 1000)
	{
		_putchar(n / 1000 + '0');
	}
	if (n > 100)
		_putchar(n / 100 + '0');
	if (n > 10)
		_putchar(n / 10 + '0');

	_putchar(n % 10 + '0');
	_putchar('\n');
}

