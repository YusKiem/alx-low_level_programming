#include "main.h"


/**
 *_strdup - function to duplicate a string
 *
 *@str: string to be duplicated
 *
 *Return: @s(duplicate string)
 */

char *_strdup(char *str)
{
	int i;
	char *s;
	int d;

	if (str == NULL)
		return (NULL);
	d = 0;
	while (str[d])
		++d;
	s = malloc((d + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < d; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}
