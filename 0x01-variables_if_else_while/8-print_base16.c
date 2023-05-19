#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char letter;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
