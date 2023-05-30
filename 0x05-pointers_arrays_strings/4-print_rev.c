#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: arg
 * Return: void
 */

void print_rev(char *s)
{
	char *i = s;

	while (*i != '\0')
	{
		i++;
	}

	while (i != s)
	{
		i--;
		_putchar(*i);
	}
	_putchar('\n');

