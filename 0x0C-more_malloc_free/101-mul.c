#include "main.h"
#include <stdlib.h>

/**
 * mul - multiply 2 ints
 * @a: int
 * @b: int
 * Return: int
 */

int mul(long a, long b)
{
	return (a * b);
}

/**
 * check_num - checks if a str is an int
 * @str: string
 * Return: int
 */

int check_num(char *str)
{
	long i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 0 && str[i] > 9)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _puts - prints string
 * @s: str
 * Return: void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * print_num - prints integers
 * @n: int
 * Return: void
 */

void print_num(long n)
{
	long num;

	num = n;
	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	if (num / 10 != 0)
	{
		n = num / 10;
		print_num(n);
	}
	_putchar(num % 10 + '0');
}


/**
 * main - entry point
 * @ac: int
 * @av: arr
 * Return: int
 */

int main(int ac, char **av)
{
	long num1, num2, res;

	if (ac != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	if (!check_num(av[1]) || !check_num(av[2]))
	{
		_puts("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[2]);

	res = mul(num1, num2);

	print_num(res);
	_putchar('\n');
	return (0);
}
