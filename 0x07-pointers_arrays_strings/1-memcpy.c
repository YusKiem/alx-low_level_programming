#include "main.h"

/**
  * _memcpy - copies memory area.
  * @dest: memory area to be copied to
  * @src: memory area to copy to dest
  * @n: bytes from the memory area src
  * Return: dest as the memory the memory area copied to
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (*src != '\0' && i <= n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
