#include <stdio>
#include "main.h"

/**
  * print_line - prints a straight line
  * @n: length of the line
  */

void print_line(int n)
{
	int i;
	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			putchar('_');
		putchar('\n');
	}
}
