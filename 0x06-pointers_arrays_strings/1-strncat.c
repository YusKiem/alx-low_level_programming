#include "main.h"
/**
  * _strncat - concatenates two strings
  *
  * @dest: first string
  * @src: second string to be concatenated
  * @n: number of characters
  * Return: string of characters
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while ( dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return dest;
}
