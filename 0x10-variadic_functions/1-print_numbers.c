#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: char
 * @n: char
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		unsigned int b;

		b = va_arg(args, int);
		printf("%d", b);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
