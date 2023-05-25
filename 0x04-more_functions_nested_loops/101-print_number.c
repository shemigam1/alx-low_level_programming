#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: arg
 * Return: void
 */

void print_number(int n)
{
	int sub, s;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n >= 1000 && n <= 9999)
	{
		sub = n / 1000;
		s = (n / 100) % 10;
		_putchar(sub + '0');
		if (s == 0)
			_putchar(s + '0');
		n = n - (sub * 1000);
	}
	if (n >= 100 && n <= 999)
	{
		sub = n / 100;
		s = (n / 10) % 10;
		_putchar(sub + '0');
		if (s == 0)
			_putchar(s + '0');
		n = n - (sub * 100);
	}
	if (n >= 10 && n <= 99)
		_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

