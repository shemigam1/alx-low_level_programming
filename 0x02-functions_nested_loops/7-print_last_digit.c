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
	_putchar(last + '0');
	return (last);
}
