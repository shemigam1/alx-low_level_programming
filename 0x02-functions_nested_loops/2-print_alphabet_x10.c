#include "main.h"

/**
 * print_alphabet_x10 - prints letters 10x times
 */

void print_alphabet_x10(void)
{
	int index;
	char alp;

	for (index = 0; index < 10; index++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
