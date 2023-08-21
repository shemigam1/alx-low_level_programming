#include <stdio.h>

/**
 * add - add fun
 * @a: int
 * @b: int
 * Return: int
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - sub fun
 * @a: int
 * @b: int
 * Return: int
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - mul fun
 * @a: int
 * @b: int
 * Return: int
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - div fun
 * @a: int
 * @b: int
 * Return: int
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Division by zero\n");
		return (0);
	}
}
/**
 * mod - mod fun
 * @a: int
 * @b: int
 * Return: int
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Modulo by zero\n");
		return (0);
	}
}
