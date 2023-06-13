#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pointer to arg on heap
 * @str: string
 * Return: ptr to str
 */

char *_strdup(char *str)
{
	int i;
	char *newstr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	newstr = malloc((i + 1) * sizeof(char));
	if (newstr != NULL)
	{
		strcpy(newstr, str);
	}
	else
	{
		free(newstr);
		return (NULL);
	}
	return (newstr);
}
