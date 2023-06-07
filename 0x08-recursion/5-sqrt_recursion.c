#include "main.h"

/**
 * check_mid - checks the middle of n
 * @st: int
 * @end: int
 * @n:int
 * Return: int
 */

int check_mid(int n, int st, int end)
{
	int mid; 
	int sq;

	if (st > end)
		return (-1);
	mid = (st + end) / 2;
	sq = mid * mid;
	if (sq == n)
		return (mid);
	else if (sq < n)
		return (check_mid(n, mid + 1, end));
	else
		return (check_mid(n, st, mid - 1));
}

/**
 * _sqrt_recursion - returns natural sqrt of num
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_mid(n, 0, n));
}
