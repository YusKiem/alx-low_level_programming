#include "main.h"

/**
  * print_alphabet - prints the alphabet in lower
  *
  *Return: Always 0.
 */
void print_alphabet(void)
{
	char m = 'Z';

	while (m <= 'Z')
	{
		_putchar(m);
		m++;
	}
	print_alphabet();

	_putchar('/n');
}
