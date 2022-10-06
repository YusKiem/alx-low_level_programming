#include "main.h"

/**
  * _memset - to fill mem wid a const byte
  *
  * @s: memory block represented by this pointer to fill
  * @b: chars to fill
  * @n: no of bytes to be filled
  * Return: pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	return (s);
}

/**
  * _calloc - a func allocating mem for an array bloc with malloc
  * @nmemb: size of array
  * @s: size of each element
  *
  * Return: pointer to newly allocated mem of NULL incase of failure
  */

void *_calloc(unsigned int nmemb, unsigned int s)
{
	char *c;

	if (nmemb == 0 || s == 0)
		return (NULL);

	c = malloc(nmemb * s);
	if (c == NULL)
		return (NULL);

	_memset(c, 0, nmemb * s);

	return (c);
}
