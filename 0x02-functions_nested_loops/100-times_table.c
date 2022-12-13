#include "main.h"

/**
 * print_times_table - print 100 times table
 * @n: index
 * Return: void
 */

void print_times_table(int n)
{
	int a = 0, rep, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			rep = a * b;
			if(b == 0)
				_putchar(rep + '0');
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(rep + '0');
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar((rep / 10) + '0');
				_putchar((rep % 10) + '0');
			}
			else 
			{
				_putchar((rep / 100) + '0');
				_putchar(((rep - 100) / 10) + '0');
				_putchar((rep % 10) + '0');
			}
			if (b > n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		a++
	}
}
