#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: arg
 * Return: void
 */

void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	if (num / 10 != 0)
	{
		n = num / 10;
		print_number(n);
	}
	_putchar(num % 10 + '0');
}
