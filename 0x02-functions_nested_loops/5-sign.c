#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: variable
 * Return: 1 on success 0 on failure
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return;
}
