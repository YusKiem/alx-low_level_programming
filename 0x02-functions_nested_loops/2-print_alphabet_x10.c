#include "main.h"
/**
  * print_alphabet_x10 -  prints the alphabet x10
  *
  * Return - it's a void function
  *
 */
void print_alphabet_x10(void)
{
	char c;
	int i, n = 10;

	for (i = 0; i < n ; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
