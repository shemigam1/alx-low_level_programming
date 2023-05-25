#include "main.h"

/**
 * print_triangle - prints a tringle
 * @size: arg
 * Return: void
 */

void print_triangle(int size)
{
	int i, c, a;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (c = 1; c <= size; c++)
			{
				for (a = size - c; a < size; a++)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
