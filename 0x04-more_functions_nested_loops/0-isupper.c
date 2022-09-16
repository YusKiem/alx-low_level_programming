#include <stdio.h>

/**
  * isupper - checks if an alphabet is upper or lower case
  *
  * @c: the alphabet studied
  * Return: returns 1 if upper and 0 if lower case
  */

int isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
