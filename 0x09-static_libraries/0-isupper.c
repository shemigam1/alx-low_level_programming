#include "main.h"

/**
 * _isupper - checks for uppercase char
 * @c: variable
 * Return: 1 on success 0 on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	return (0);
}
