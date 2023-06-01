#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes every word in a string
 * @s: string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	char *str = s;
	int next = 1;

	while (*str != '\0')
	{
		if (*str == ' ' ||
			*str == '\t' ||
			*str == '\n' ||
			*str == '.' ||
			*str == ',' ||
			*str == ';' ||
			*str == '?' ||
			*str == '!' ||
			*str == '(' ||
			*str == ')' ||
			*str == '{' ||
			*str == '}' ||
			*str == '"')
		{
			next = 1;
		}
		else if (next && (*str >= 97 && *str <= 122))
		{
			*str = *str - 32;
			next = 0;
		}
		else
		{
			next = 0;
		}
		str++;
	}
	return (s);
}
