#include "main.h"

/**
  * _isdigit - checks if the input is a digit or not
  *
  * @c: the character checked
  * Return: returns a boolean answer
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
