#include "main.h"

/**
 * puts2 - prints every other char
 * @str: ard
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	if (!str)
		_putchar(' ');

	while (*str != '\0')
	{
		if (i == 0)
			_putchar(*str);
		str++;
		i++;
			if (i % 2 == 0)
			_putchar(*str);
	}
	_putchar('\n');
}

