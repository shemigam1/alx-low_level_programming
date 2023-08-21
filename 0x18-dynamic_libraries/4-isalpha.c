#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic characters
 * @c: variable
 * Return: 1 on success 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
