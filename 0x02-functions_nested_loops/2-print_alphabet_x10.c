#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char start;

	for (i = 0; i < 10; i++)
	{
		for (start = 'a'; start <= 'z'; start++)
        	{
                	_putchar(start);
        	}
        	_putchar('\n');
	}
}
