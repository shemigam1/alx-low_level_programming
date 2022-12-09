#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ap;

	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ap = 'a'; ap < 'g'; ap++)
	{
		putchar(ap);
	}

	putchar('\n');

return (0);
}
