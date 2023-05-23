#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (prod < 10 && j >= 1)
				_putchar(' ');
			else if (prod >= 10 && j > 1)
				_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
