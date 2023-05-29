#include "main.h"

/**
 * rev_string - reverses a string
 * @s: arg
 * Return: void
 */

void rev_string(char *s)
{
	char *i = s;
	char *a = s;

	while (*i != '\0')
	{
		i++;
	}
	i--;

	while (a < i)
	{
		char tmp = *a;

		tmp = *a;
		*a = *i;
		*i = tmp;

		a++;
		i--;
	}
}
