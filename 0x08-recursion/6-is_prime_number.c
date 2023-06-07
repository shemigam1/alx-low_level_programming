#include "main.h"

/**
 * check_div - checks if num is divisible by div
 * @num: int
 * @div: int
 * Return: int
 */

int check_div(int num, int div)
{
	if ((div * div) > num)
		return (1);
	if (num % div == 0)
		return (0);
	return (check_div(num, div + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: int
 * Return: 0(success) 1(failure)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_div(n, 2));
}
