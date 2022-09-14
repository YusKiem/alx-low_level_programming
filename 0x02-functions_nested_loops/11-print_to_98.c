#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - prints natural numbers upto 98
  *
  *@n: natural number entered
  */
void print_to_98(int n)
{
	if (n == 98)
		_putchar('n'+'.');
	else
		while (n <= 98)
		{
			_putchar('n'+','+' ');
			n++;
		}
}
