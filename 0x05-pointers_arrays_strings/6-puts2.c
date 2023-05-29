#include "main.h"

/**
 * puts2 - prints every other char
 * @str: ard
 * Return: void
 */

void puts2(char *str)
{
	if (!str)
		_putchar(' ');

	while (*str != '\0')
	{
		if (*(str + 1) != '\0')
			_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

