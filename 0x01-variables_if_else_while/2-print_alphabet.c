#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char first;

	for (first = 'a'; first <= 'z'; first++)
	{
		putchar(first);
	}
	putchar('\n');
	return (0);
}
