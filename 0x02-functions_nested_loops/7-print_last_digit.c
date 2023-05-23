#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: variable
 * Return: last digit
 */

int print_last_digit(int num)
{
	_putchar(num % 10 + '0');
	return (num % 10 + '0');
}
