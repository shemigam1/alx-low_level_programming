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
			for (c = 1; c <= size - i; c++)
			{
				_putchar(' ');
			}
			for (a = 1; a <= i; a++)
				_putchar('#');
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
