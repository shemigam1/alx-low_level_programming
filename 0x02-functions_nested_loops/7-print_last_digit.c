#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: variable
 * Return: last digit
 */

int print_last_digit(int num)
{
	char last_num;

	last_num = _putchar(num % 10 + '0');
	return (last_num);
}
