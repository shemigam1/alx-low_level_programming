#include <stdio.h>
/**
 * main - print unrecurring combinations of single digits
 *
 * Return: 0
 */
int main(void)
{
	int ones;

	int tens;

	for (tens = 0; tens < 10; tens++)
	{
		for (ones = 0; ones < 10; ones++)
		{
			if (ones != tens || tens < ones)
			{
				putchar((tens % 10) + '0');
				putchar((ones % 10) + '0');

				if (ones != 9 && tens != 8)
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
