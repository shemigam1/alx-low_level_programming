#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all args
 * @n: int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, a;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	a = 0;
	for (i = 0; i < n; i++)
	{
		unsigned int b;

		b = va_arg(args, int);
		a += b;
	}
	return (a);
}
