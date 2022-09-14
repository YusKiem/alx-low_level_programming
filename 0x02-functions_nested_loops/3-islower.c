#include "main.h"
/**
  * main - returns an integer if true
  *
  * function checks whether a given character is lowercase or not
  *
  */
int _islower(int c)
{
	if(c >= 97 && c <= 122)
		return (1);
	else
		return (0);

	
}
