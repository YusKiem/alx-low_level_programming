#include "main.h"

/**
  * factorial - returns factorial of a given number
  * @n: a number whose fact is to be determined
  *
  * Return: integer, factorial
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
