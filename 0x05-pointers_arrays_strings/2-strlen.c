#include "main.h"

/**
 * _strlen - returns length of string
 * @s: arg
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
