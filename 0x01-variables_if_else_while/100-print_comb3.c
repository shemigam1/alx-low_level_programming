#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int num;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (num = ten + 1; num < 10; num++)
		{
			putchar(ten + '0');
			putchar(num + '0');
			if (ten != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
