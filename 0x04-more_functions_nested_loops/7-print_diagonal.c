#include "main.h"

/**
  * print_diagonal - prints a diagonal in the terminal
  * @n: length of the diagonal
  */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
	if (n <= 1)
		putchar('\n');
}
