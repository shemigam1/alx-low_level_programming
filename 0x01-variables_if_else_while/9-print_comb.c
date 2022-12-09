#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 20; x < 30; x++)
	{
		putchar(x);

		if (x != 29)
		{
			putchar(',');
			putchar(' ');
		}
	}
return (0);
}
