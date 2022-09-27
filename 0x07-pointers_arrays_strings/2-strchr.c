#include "main.h"

/**
  * -strchr - locates a character string
  * @s: The string in which a character is to be located
  * @c: A character to be located in the string
  *
  * Return: returns a character
  */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
