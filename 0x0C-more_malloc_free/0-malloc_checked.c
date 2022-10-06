#include "main.h"

/**
  * malloc_checked - returns pointer to allocated memory
  * @b: size of allocated memory
  * Return: 
  */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (b == 0)
		exit(98);
	else
		return (c);
}
