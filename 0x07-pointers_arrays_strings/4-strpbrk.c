#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a str for any of a set of bytes
 * @s: str
 * @accept: str
 * Return: pointer to str
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *b = accept;

		for (; *b != '\0'; b++)
		{
			if (*s == *b)
				return (s);
		}
		s++;
	}
	return (NULL);
}
