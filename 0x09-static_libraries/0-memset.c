#include "main.h"

/**
  * _memset - A function that fills memory with a constant byte
  * @s: a pointer that points to the memory
  * @b: the constant byte
  * @n: the first n bytes
  * Return: returns a character
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
