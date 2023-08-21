#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer
 * @b: char
 * @n: int
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
