#include "main.h"

/**
  * _strcat - concatenates two strings
  *
  * @dest: first string
  * @src: second string to be concatenated
  * Return: returns a character string
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
