#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates the args
 * @ac: num of ars
 * @av: array of args
 * Return: str
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len, i, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	str = malloc((len + i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *s;

		for (s = av[index]; *s != '\0'; s++)
		{
			str[index++] = *s;
		}
		str[index] = '\n';
	}
	str[index] = '\0';
	return (str);
}
