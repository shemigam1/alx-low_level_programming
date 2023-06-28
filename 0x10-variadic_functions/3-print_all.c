#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: char
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, a;

	i = 0;
	while (format[i] != '\0')
		i++;
	va_start(args, format);
	a = 0;
	while (a < i)
	{
		switch (format[a])
		{
			char ctoken;
			char *stoken;

			case 'c':
				ctoken = (char) va_arg(args, int);
				printf("%c", ctoken);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				stoken = va_arg(args, char*);
				if (stoken == NULL)
					printf("(nil)");
				printf("%s", stoken);
				break;
			default:
				a++;
				continue;
		}
		if (a != (i - 1))
			printf(", ");
		a++;
	}
	printf("\n");
}
