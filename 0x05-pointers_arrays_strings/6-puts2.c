#include "main.h"

/**
 * puts2 - prints every other char
 * @str: ard
 * Return: void
 */

void puts2(char *str)
{
	int i, j = 0;

	if (!str)
		_putchar(' ');

	while (*str != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar(*str);
		str += 2;
	}

}

