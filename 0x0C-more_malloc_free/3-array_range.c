#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: int
 * @max: int
 * Return: ptr to int
 */

int *array_range(int min, int max)
{
	int range, i;
	int *arr;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
