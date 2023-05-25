#include <stdio.h>

/**
 * prime_factor - checks for prime factor
 * @num: arg
 * Return: number
 */

long long prime_factor(long long num)
{
	long long lf, i;

	lf = -1;

	while (num & 2 == 0)
	{
		lf = 2;
		num /= 2;
	}

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			lf = i;
			num /= i;
		}
	}

	if (num > 2)
		lf = num;
	return (lf);
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long long int a, b;

	a = 612852475143;
	b = prime_factor(a);
	printf("%lld\n", b);
	return (0);
}
