#include <stdio.h>

/**
 * main - prints fizz for multiples of 3,
 * buzz for multiples of 5 and fizzbuzz for multiples of 3 AND 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i >= 3 && i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
