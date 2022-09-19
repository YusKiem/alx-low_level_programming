#include "main.h"

/**
  * swap_int - swaps integerss
  *
  * @a: one of the pointers to be used in the function
  * @b: the second pointer to help swap values of two integers
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
