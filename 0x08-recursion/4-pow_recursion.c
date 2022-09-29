#include "main.h"

/**
  * _pow_recursion - returns the value of x to the power y
  * @x: the integer whose power we are looking for
  * @y: the integer which is acting like a power
  *
  * Return: integer, the value after raising x to the power of y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
