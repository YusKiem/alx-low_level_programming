#include <stdlib.h>
#include <stdio.h>
/**
  * main - returns name of the argument
  * @argc: argument counter
  * @argv: argument vector
  * Return: zero
  */
int main(int argc, char *argv[])
{
	int x = 0;

	x = x + argc;
	printf("%s\n", argv[0]);
	return (x);
}
