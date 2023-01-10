#include "main.h"

/**
 * largest_number - prints largest of three nums
 * @a: character
 * @b: character
 * @c: character
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
		{
			largest = a;
		}
		else if (a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}
	else
	{
		if (c > b)
		{
			largest = c;
		}
		else
		{
			largest = b;
		}
	}

	return (largest);
}
