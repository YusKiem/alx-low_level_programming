#include "main.h"

/**
  * rev_string - reverses string
  * @s: string to be reversed
  */

void rev_string(char *s)
{
	int i, x, y, c;

	i = 0;
	while (s[i] != '\0')
		i++;
	y = i - 1;
	for ( x = 0; x < y; x++)
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		y = y - 1;
	}
}
