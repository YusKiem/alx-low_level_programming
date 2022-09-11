#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		++n;
	}
	putchar('\n');
	return (0);
}
