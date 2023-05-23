#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
