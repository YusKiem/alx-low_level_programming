#include "main.h"

/**
  * _strcmp - compares two strings
  *
  * @s1: first string
  * @s2: second string
  * Return: either 0 or negative or positive integer
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}
	return (0);
}
