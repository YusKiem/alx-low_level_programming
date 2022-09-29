#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: string whose length is to be returned
  *
  * Return: integer w/c is the length of the screen
  */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		i = i + _strlen_recursion(s + 1);
		return (i);
	}
	else
		return (0);
}
