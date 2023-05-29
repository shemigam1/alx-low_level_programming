#include "main.h"

/**
 * puts2 - prints every other char
 * @str: ard
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	_putchar(*str);
	while (*str != '\0')
	{
		str++;
		i++;
		if (i % 2 == 0)
			_putchar(*str);
	}
	_putchar('\n');
}

