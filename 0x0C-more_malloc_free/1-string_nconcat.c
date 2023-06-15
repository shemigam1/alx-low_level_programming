#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns length of string
 * @s: arg
 * Return: length of s
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s2: str
 * @s1: str
 * @n: size of buffer
 * Return: str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1len, s2len, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	str = malloc((s1len + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (s1[a] != 0)
	{
		str[a] = s1[a];
		a++;
	}
	b = 0;
	if (n > s2len)
	{
		while (s2[b] != '\0')
		{
			str[a] = s2[b];
			a++;
			b++;
		}
	}
	else
	{
		unsigned int j;

		for (j = 0; j < n; j++)
		{
			str[a] = s2[j];
			a++;
		}
	}
	str[a] = '\0';
	return (str);
}
