#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: str
 * @s2: str
 * @n: size
 * Return: ptr to new str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0;
	unsigned int a;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
		n = j;
	str = malloc((i + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		str[k] = *s1;
		s1++;
		k++;
	}
	for (a = 0; a < n; a++)
	{
		str[k] = s2[a];
		k++;
	}
	str[k] = '\0';
	return (str);
}
