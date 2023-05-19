#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int num;
	int ten;
	int hundo;

	for (hundo = 0; hundo < 10; hundo++)
	{
		for (ten = hundo + 1; ten < 10; ten++)
		{
			for (num = ten + 1; num < 10; num++)
			{
				putchar(hundo + '0');
				putchar(ten + '0');
				putchar(num + '0');
				if (hundo != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
