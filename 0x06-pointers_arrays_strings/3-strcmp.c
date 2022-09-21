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
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (int)(unsigned char)(*s1) - (int)(unsigned char)(*s2);
}
