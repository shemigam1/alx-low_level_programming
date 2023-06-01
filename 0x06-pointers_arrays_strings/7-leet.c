#include "main.h"

/**
 * leet - transforms string to leet encoding
 * @s: string
 * Return: ptr to str
 */

char *leet(char *s)
{
	char *str = s;

	while (*str != '\0')
	{
		if ((*str == 'a' || *str == 'A') && ((*str = '4') || 1)) {}
		else if ((*str == 'e' || *str == 'E') && ((*str = '3') || 1)) {}
		else if ((*str == 'o' || *str == 'O') && ((*str = '0') || 1)) {}
		else if ((*str == 't' || *str == 'T') && ((*str = '7') || 1)) {}
		else if ((*str == 'l' || *str == 'L') && ((*str = '1') || 1)) {}
		str++;
	}
	return (s);
}
