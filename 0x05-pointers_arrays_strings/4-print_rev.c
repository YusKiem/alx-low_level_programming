#include "main.h"

/**
  * print_rev - reverses a string
  * @s: string to be reversed
  */
void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		c++;
	for (i = c - 1; i >= 0; i--)
		putchar(*(s + i));
	putchar('\n');
}
