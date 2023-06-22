#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: char
 * @n: int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		char *str;

		str = va_arg(args, char*);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
