#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	for (int i = 0; i < sizeof(arr)/sizeof(char); i++) 
	{
		_putchar(arr[i]);
	}
	return (0);
}
