#include <unistd.h>
/**
  *main - Prints putchar
  *Return: Always 0 (Success)
  */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
