#include "main.h"

/**
 * leet - transforms string to leet encoding
 * @s: string
 * Return: ptr to str
 */

char *leet(char *s)
{
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == lower[j] || *(s + i) == upper[j])
			{
				*(s + i) = leet[j];
			}
		}
	}
	return (s);
}
