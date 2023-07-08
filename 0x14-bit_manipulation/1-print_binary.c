#include "main.h"

/**
 * print_binary - prints binary
 * @n : int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int a;
	int zero;

	if (n != 0)
	{
		a = 1UL << (sizeof(unsigned long int) * 8 - 1);
		zero = 1;
		while (a > 0)
		{
			if (n & a)
			{
				zero = 0;
				_putchar('1');
			}
			else if (!zero)
				_putchar('0');
			a >>= 1;
		}
	}
	else
		_putchar('0');
}
