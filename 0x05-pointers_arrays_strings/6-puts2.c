#include "main.h"

/**
 * puts2 - prints every other char
 * @str: ard
 * Return: void
 */

void puts2(char *str)
{
	char *i = str;

	if (!str)
		_putchar(' ');

	while (*str != '\0')
	{
		i++;
	}
	while (*i != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

