#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: ptr to string
 * @c: char
 * Return: ptr to char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
