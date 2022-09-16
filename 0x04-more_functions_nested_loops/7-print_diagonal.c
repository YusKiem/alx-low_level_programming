#include "main.h"

/**
  * print_diagonal - prints a diagonal in the terminal
  * @n: length of the diagonal
  */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < i; j++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
	putchar('\n');
}
