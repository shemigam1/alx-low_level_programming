#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int ones = 0;
int tens = 0;
int huns = 0;

for (huns = 0; huns <= 9; huns++)
{
	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			if (!((ones == tens) || (tens == huns) || (tens > ones) || (huns > tens)))
			{
				putchar((huns % 10) + '0');
				putchar((tens % 10) + '0');
				putchar((ones % 10) + '0');
				if (!(ones == 9 && huns == 7 && tens = 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return 0;
}
