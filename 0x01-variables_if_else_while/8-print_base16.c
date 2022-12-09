#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ap;

	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (char = 'a'; char < 'g'; char++)
		putchar(char);

	putchar('\n');

return (0);
}
