#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int oneone;
	int onetwo;
	int twoone;
	int twotwo;

	for (oneone = 0; oneone <= 9; oneone++)
	{
		for (onetwo = 0; onetwo <= 9; onetwo++)
		{
			for (twoone = 0; twoone <= 9; twoone++)
			{
				for (twotwo = 1; twotwo <= 9; twotwo++)
				{
					putchar(oneone + '0');
					putchar(onetwo + '0');
					putchar(' ');
					putchar(twoone + '0');
					putchar(twotwo + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
