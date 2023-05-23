#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: variable
 * Return: last digit
 */

int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
