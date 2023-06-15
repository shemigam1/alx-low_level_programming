#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: str
 * @s2: str
 * @n: size
 * Return: ptr to new str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
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
	if (n < j)
	{
		str = malloc((i + n) * sizeof(char));
	}
	else
	{
		str = malloc((i + j + 1) * sizeof(char));
	}
	if (str == NULL)
		return (NULL);
	strcpy(str, s1);
	strncat(str, s2, n);
	return (str);
}
