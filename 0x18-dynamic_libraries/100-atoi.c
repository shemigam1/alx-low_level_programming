#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: pointer
 * Return: 0
 */

int _atoi(char *s)
{
	int res;
	int sign, count;

	sign = 1;
	res = 0;
	count = 0;

	while (*s != '\0')
	{
		if (*s == 32 || *s == 9)
		{
			s++;
		}
		if (*s == '-')
		{
			count++;
			s++;
		}
		if (*s >= '0' && *s <= '9')
		{
			res = res * 10 + (*s - '0');
			if (*(s + 1) == ' ')
			{
				s++;
			}
		}
		else
		{
			s++;
		}
		s++;
	}
	sign = (count % 2 == 0) ? 1 : -1;
	return (sign * res);
}
