#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: string
 * Return: pointer to str;
 */

char *string_toupper(char *s)
{
	char *str = s;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (s);
}
