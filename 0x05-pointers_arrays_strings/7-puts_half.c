#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: arg
 * Return: void
 */

void puts_half(char *str)
{
	char *p = str;
	int i = 0;
	int half;

	while (*p != '\0')
	{
		i++;
		p++;
	}
	if (i % 2 == 0)
		half = i / 2;
	else
		half = ((i - 1) / 2) + 1;
	p = str + half;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
