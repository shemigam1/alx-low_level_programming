#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: str
 * @s2: str
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int a = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[a] != '\0')
	{
		a++;
	}
	str = malloc((i + a + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
}
