#include "main.h"

/**
 * print_times_table - print 100 times table
 * @n: index
 * Return: void
 */

// void print_times_table(int n)
// {
// 	int a = 0, rep, b;

// 	if (n < 0 || n > 15)
// 		return;

// 	while (a <= n)
// 	{
// 		for (b = 0; b <= n; b++)
// 		{
// 			rep = a * b;
// 			if(b == 0)
// 				_putchar(rep + '0');
// 			else if (rep < 10)
// 			{
// 				_putchar(' ');
// 				_putchar(' ');
// 				_putchar(rep + '0');
// 			}
// 			else if (rep < 100)
// 			{
// 				_putchar(' ');
// 				_putchar((rep / 10) + '0');
// 				_putchar((rep % 10) + '0');
// 			}
// 			else 
// 			{
// 				_putchar((rep / 100) + '0');
// 				_putchar(((rep - 100) / 10) + '0');
// 				_putchar((rep % 10) + '0');
// 			}
// 			if (b > n)
// 			{
// 				_putchar(',');
// 				_putchar(' ');
// 			}
// 		}
// 		a++;
// 	}
// }
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					k = j * i;
					if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

