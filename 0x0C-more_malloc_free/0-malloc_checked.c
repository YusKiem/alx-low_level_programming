#include "main.h"

/**
  * malloc_checked - returns pointer to allocated memory
  * @b: size of allocated memory
  * Return: returns pointer to address of allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
