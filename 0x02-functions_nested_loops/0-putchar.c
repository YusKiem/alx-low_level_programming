#include <stdio>
#include <main.h>
/**
  *main - Prints putchar

  *Return: Always 0 (Success)

  */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
