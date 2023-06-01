#include "main.h"

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
		if (next && (*str >= 97 && *str <= 122))
		{
			*s = *s - 32;
			next = 0;
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '.' || *str == ',' || *str == ';' || *str == '!' || *str == '?' || *str == '"' || *str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			next = 1;
		}
		str++;
	}
	return (s);
}
