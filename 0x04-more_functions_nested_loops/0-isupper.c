#include "main.h"

/**
  * isupper - checks if an alphabet is upper or lower case
  *
  * @c: the alphabet studied
  * Return: returns 1 if upper and 0 if lower case
  */

int _isupper(int c)
{
	if (c > '64' && c < '91')
		return (1);
	else
		return (0);
}
