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
		len += strlen(av[i]) + i;
	}
	len += ac;

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int arg_len = strlen(av[i]);

		strcpy(str + index, av[i]);
		index += arg_len;
		if (i != ac - 1)
		{
			str[index] = '\n';
			index++;
		}
	}
	str[index] = '\0';
	return (str);
}
