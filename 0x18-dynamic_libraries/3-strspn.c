#include "main.h"

/**
 * _strspn - returns the length of a prefix substring
 * @s: str
 * @accept: str
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		char *p = accept;

		i = 0;
		for (; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				i = 1;
				break;
			}
		}
		if (i == 0)
			return (j);
		j++;
		s++;
	}
	return (j);
}
