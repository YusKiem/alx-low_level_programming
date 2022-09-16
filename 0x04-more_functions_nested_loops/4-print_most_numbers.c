#include "main.h"

/**
  * print_most_numbers - prints most numbers
  */

void print_most_numbers(void)
{
	char i;

	while (i <= '9')
		if (i == '2' || i == '4')
			i++;
		else
		{
			putchar(i);
			i++;
		}
	putchar('\n');
}
