#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: arg
 * Return: void
 */

void print_diagonal(int n)
{
	int i, c;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (c = 1; c <= i; c++)
			{
				if (c == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
